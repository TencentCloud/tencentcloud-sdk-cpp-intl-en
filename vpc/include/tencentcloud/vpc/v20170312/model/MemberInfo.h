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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MEMBERINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MEMBERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Parameter template information.
                */
                class MemberInfo : public AbstractModel
                {
                public:
                    MemberInfo();
                    ~MemberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter template.
                     * @return Member Parameter template.
                     * 
                     */
                    std::string GetMember() const;

                    /**
                     * 设置Parameter template.
                     * @param _member Parameter template.
                     * 
                     */
                    void SetMember(const std::string& _member);

                    /**
                     * 判断参数 Member 是否已赋值
                     * @return Member 是否已赋值
                     * 
                     */
                    bool MemberHasBeenSet() const;

                    /**
                     * 获取Parameter template description.
                     * @return Description Parameter template description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Parameter template description.
                     * @param _description Parameter template description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Parameter template.
                     */
                    std::string m_member;
                    bool m_memberHasBeenSet;

                    /**
                     * Parameter template description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MEMBERINFO_H_
