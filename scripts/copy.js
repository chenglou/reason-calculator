#!/usr/bin/env node

const fs = require('fs')
const path = require('path')

const root = path.join(__dirname, '..')
const script = process.argv[2]
const output = script.replace(path.join(root, 'lib', 'js'), '')
const js = path.join(
  path.dirname(script),
  path.basename(script).replace(/^./, letter => letter.toLowerCase())
)

fs.writeFileSync(
  path.join(root, output),
  fs.readFileSync(js)
)
