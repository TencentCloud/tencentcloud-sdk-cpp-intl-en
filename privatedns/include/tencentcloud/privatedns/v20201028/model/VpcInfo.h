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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_VPCINFO_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_VPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * VPC information
                */
                class VpcInfo : public AbstractModel
                {
                public:
                    VpcInfo();
                    ~VpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VpcId: vpc-xadsafsdasd
                     * @return UniqVpcId VpcId: vpc-xadsafsdasd
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VpcId: vpc-xadsafsdasd
                     * @param _uniqVpcId VpcId: vpc-xadsafsdasd
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC region: ap-guangzhou, ap-shanghai
                     * @return Region VPC region: ap-guangzhou, ap-shanghai
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置VPC region: ap-guangzhou, ap-shanghai
                     * @param _region VPC region: ap-guangzhou, ap-shanghai
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * VpcId: vpc-xadsafsdasd
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * VPC region: ap-guangzhou, ap-shanghai
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_VPCINFO_H_
