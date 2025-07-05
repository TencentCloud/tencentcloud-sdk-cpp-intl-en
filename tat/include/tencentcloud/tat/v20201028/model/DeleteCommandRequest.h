/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DELETECOMMANDREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DELETECOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DeleteCommand request structure.
                */
                class DeleteCommandRequest : public AbstractModel
                {
                public:
                    DeleteCommandRequest();
                    ~DeleteCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the command to be deleted.
                     * @return CommandId ID of the command to be deleted.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置ID of the command to be deleted.
                     * @param _commandId ID of the command to be deleted.
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                private:

                    /**
                     * ID of the command to be deleted.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DELETECOMMANDREQUEST_H_
