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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATEMODULERESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATEMODULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateModule response structure.
                */
                class CreateModuleResponse : public AbstractModel
                {
                public:
                    CreateModuleResponse();
                    ~CreateModuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Module ID. It is the ID assigned to a module after it is created successfully.
                     * @return ModuleId Module ID. It is the ID assigned to a module after it is created successfully.
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                private:

                    /**
                     * Module ID. It is the ID assigned to a module after it is created successfully.
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATEMODULERESPONSE_H_
