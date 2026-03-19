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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYNODE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Queries the list of targets associated with a specified SCP.
                */
                class ListTargetsForPolicyNode : public AbstractModel
                {
                public:
                    ListTargetsForPolicyNode();
                    ~ListTargetsForPolicyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SCP account UIN or node ID.
                     * @return Uin SCP account UIN or node ID.
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置SCP account UIN or node ID.
                     * @param _uin SCP account UIN or node ID.
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Association type. 1: node association; 2: user association.
                     * @return RelatedType Association type. 1: node association; 2: user association.
                     * 
                     */
                    uint64_t GetRelatedType() const;

                    /**
                     * 设置Association type. 1: node association; 2: user association.
                     * @param _relatedType Association type. 1: node association; 2: user association.
                     * 
                     */
                    void SetRelatedType(const uint64_t& _relatedType);

                    /**
                     * 判断参数 RelatedType 是否已赋值
                     * @return RelatedType 是否已赋值
                     * 
                     */
                    bool RelatedTypeHasBeenSet() const;

                    /**
                     * 获取Account or node name.
                     * @return Name Account or node name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Account or node name.
                     * @param _name Account or node name.
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
                     * 获取Binding time.
                     * @return AddTime Binding time.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Binding time.
                     * @param _addTime Binding time.
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                private:

                    /**
                     * SCP account UIN or node ID.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Association type. 1: node association; 2: user association.
                     */
                    uint64_t m_relatedType;
                    bool m_relatedTypeHasBeenSet;

                    /**
                     * Account or node name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Binding time.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYNODE_H_
