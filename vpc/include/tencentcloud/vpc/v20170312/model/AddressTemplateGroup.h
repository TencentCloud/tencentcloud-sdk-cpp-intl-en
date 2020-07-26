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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEGROUP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressTemplateItem.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * IP address template group
                */
                class AddressTemplateGroup : public AbstractModel
                {
                public:
                    AddressTemplateGroup();
                    ~AddressTemplateGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP address template group name.
                     * @return AddressTemplateGroupName IP address template group name.
                     */
                    std::string GetAddressTemplateGroupName() const;

                    /**
                     * 设置IP address template group name.
                     * @param AddressTemplateGroupName IP address template group name.
                     */
                    void SetAddressTemplateGroupName(const std::string& _addressTemplateGroupName);

                    /**
                     * 判断参数 AddressTemplateGroupName 是否已赋值
                     * @return AddressTemplateGroupName 是否已赋值
                     */
                    bool AddressTemplateGroupNameHasBeenSet() const;

                    /**
                     * 获取IP address template group instance ID, such as `ipmg-dih8xdbq`.
                     * @return AddressTemplateGroupId IP address template group instance ID, such as `ipmg-dih8xdbq`.
                     */
                    std::string GetAddressTemplateGroupId() const;

                    /**
                     * 设置IP address template group instance ID, such as `ipmg-dih8xdbq`.
                     * @param AddressTemplateGroupId IP address template group instance ID, such as `ipmg-dih8xdbq`.
                     */
                    void SetAddressTemplateGroupId(const std::string& _addressTemplateGroupId);

                    /**
                     * 判断参数 AddressTemplateGroupId 是否已赋值
                     * @return AddressTemplateGroupId 是否已赋值
                     */
                    bool AddressTemplateGroupIdHasBeenSet() const;

                    /**
                     * 获取IP address template ID.
                     * @return AddressTemplateIdSet IP address template ID.
                     */
                    std::vector<std::string> GetAddressTemplateIdSet() const;

                    /**
                     * 设置IP address template ID.
                     * @param AddressTemplateIdSet IP address template ID.
                     */
                    void SetAddressTemplateIdSet(const std::vector<std::string>& _addressTemplateIdSet);

                    /**
                     * 判断参数 AddressTemplateIdSet 是否已赋值
                     * @return AddressTemplateIdSet 是否已赋值
                     */
                    bool AddressTemplateIdSetHasBeenSet() const;

                    /**
                     * 获取Creation Time.
                     * @return CreatedTime Creation Time.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation Time.
                     * @param CreatedTime Creation Time.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取IP address template instance
                     * @return AddressTemplateSet IP address template instance
                     */
                    std::vector<AddressTemplateItem> GetAddressTemplateSet() const;

                    /**
                     * 设置IP address template instance
                     * @param AddressTemplateSet IP address template instance
                     */
                    void SetAddressTemplateSet(const std::vector<AddressTemplateItem>& _addressTemplateSet);

                    /**
                     * 判断参数 AddressTemplateSet 是否已赋值
                     * @return AddressTemplateSet 是否已赋值
                     */
                    bool AddressTemplateSetHasBeenSet() const;

                private:

                    /**
                     * IP address template group name.
                     */
                    std::string m_addressTemplateGroupName;
                    bool m_addressTemplateGroupNameHasBeenSet;

                    /**
                     * IP address template group instance ID, such as `ipmg-dih8xdbq`.
                     */
                    std::string m_addressTemplateGroupId;
                    bool m_addressTemplateGroupIdHasBeenSet;

                    /**
                     * IP address template ID.
                     */
                    std::vector<std::string> m_addressTemplateIdSet;
                    bool m_addressTemplateIdSetHasBeenSet;

                    /**
                     * Creation Time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * IP address template instance
                     */
                    std::vector<AddressTemplateItem> m_addressTemplateSet;
                    bool m_addressTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEGROUP_H_
