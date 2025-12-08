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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_LISTDEPLOYSTEPTASKSREQUEST_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_LISTDEPLOYSTEPTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * ListDeployStepTasks request structure.
                */
                class ListDeployStepTasksRequest : public AbstractModel
                {
                public:
                    ListDeployStepTasksRequest();
                    ~ListDeployStepTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the unique identifier for the feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * @return Identifier Specifies the unique identifier for the feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置Specifies the unique identifier for the feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * @param _identifier Specifies the unique identifier for the feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取Maximum number of returned records. value ranges from 0 to 200.
                     * @return Limit Maximum number of returned records. value ranges from 0 to 200.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of returned records. value ranges from 0 to 200.
                     * @param _limit Maximum number of returned records. value ranges from 0 to 200.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. valid values are equal to or greater than 0.
                     * @return Offset Offset. valid values are equal to or greater than 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. valid values are equal to or greater than 0.
                     * @param _offset Offset. valid values are equal to or greater than 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Specifies the unique identifier for the feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * Maximum number of returned records. value ranges from 0 to 200.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. valid values are equal to or greater than 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_LISTDEPLOYSTEPTASKSREQUEST_H_
