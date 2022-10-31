/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_TASKINPUT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_TASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/StorageInfo.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * Audio/Video task structure
                */
                class TaskInput : public AbstractModel
                {
                public:
                    TaskInput();
                    ~TaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data ID
                     * @return DataId Data ID
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置Data ID
                     * @param DataId Data ID
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取Task name
                     * @return Name Task name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name
                     * @param Name Task name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Task input
                     * @return Input Task input
                     */
                    StorageInfo GetInput() const;

                    /**
                     * 设置Task input
                     * @param Input Task input
                     */
                    void SetInput(const StorageInfo& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * Data ID
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * Task name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Task input
                     */
                    StorageInfo m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_TASKINPUT_H_
