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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SUBNETINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SUBNETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Subnet information
                */
                class SubnetInfo : public AbstractModel
                {
                public:
                    SubnetInfo();
                    ~SubnetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subnet information (name)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SubnetName Subnet information (name)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet information (name)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param SubnetName Subnet information (name)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取Subnet information (ID)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SubnetId Subnet information (ID)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet information (ID)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param SubnetId Subnet information (ID)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * Subnet information (name)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * Subnet information (ID)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SUBNETINFO_H_
