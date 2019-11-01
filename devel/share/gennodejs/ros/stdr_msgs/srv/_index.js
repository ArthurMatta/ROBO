
"use strict";

let LoadExternalMap = require('./LoadExternalMap.js')
let DeleteSoundSource = require('./DeleteSoundSource.js')
let RegisterGui = require('./RegisterGui.js')
let DeleteRfidTag = require('./DeleteRfidTag.js')
let DeleteCO2Source = require('./DeleteCO2Source.js')
let AddSoundSource = require('./AddSoundSource.js')
let AddCO2Source = require('./AddCO2Source.js')
let MoveRobot = require('./MoveRobot.js')
let LoadMap = require('./LoadMap.js')
let AddRfidTag = require('./AddRfidTag.js')
let AddThermalSource = require('./AddThermalSource.js')
let DeleteThermalSource = require('./DeleteThermalSource.js')

module.exports = {
  LoadExternalMap: LoadExternalMap,
  DeleteSoundSource: DeleteSoundSource,
  RegisterGui: RegisterGui,
  DeleteRfidTag: DeleteRfidTag,
  DeleteCO2Source: DeleteCO2Source,
  AddSoundSource: AddSoundSource,
  AddCO2Source: AddCO2Source,
  MoveRobot: MoveRobot,
  LoadMap: LoadMap,
  AddRfidTag: AddRfidTag,
  AddThermalSource: AddThermalSource,
  DeleteThermalSource: DeleteThermalSource,
};
