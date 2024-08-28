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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHECKFILETAMPERRULEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHECKFILETAMPERRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CheckFileTamperRule request structure.
                */
                class CheckFileTamperRuleRequest : public AbstractModel
                {
                public:
                    CheckFileTamperRuleRequest();
                    ~CheckFileTamperRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of rule to be entered
                     * @return Name Name of rule to be entered
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of rule to be entered
                     * @param _name Name of rule to be entered
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Rule ID passed during editing
                     * @return Id Rule ID passed during editing
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID passed during editing
                     * @param _id Rule ID passed during editing
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Name of rule to be entered
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Rule ID passed during editing
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHECKFILETAMPERRULEREQUEST_H_
