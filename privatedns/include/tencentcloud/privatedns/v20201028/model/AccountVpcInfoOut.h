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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ACCOUNTVPCINFOOUT_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ACCOUNTVPCINFOOUT_H_

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
                * Output parameters of the associated VPC
                */
                class AccountVpcInfoOut : public AbstractModel
                {
                public:
                    AccountVpcInfoOut();
                    ~AccountVpcInfoOut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VpcId: vpc-xadsafsdasd
                     * @return VpcId VpcId: vpc-xadsafsdasd
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcId: vpc-xadsafsdasd
                     * @param _vpcId VpcId: vpc-xadsafsdasd
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Region: ap-guangzhou, ap-shanghai
                     * @return Region Region: ap-guangzhou, ap-shanghai
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region: ap-guangzhou, ap-shanghai
                     * @param _region Region: ap-guangzhou, ap-shanghai
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取VPC ID: 123456789
                     * @return Uin VPC ID: 123456789
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置VPC ID: 123456789
                     * @param _uin VPC ID: 123456789
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取VPC name: testname
                     * @return VpcName VPC name: testname
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name: testname
                     * @param _vpcName VPC name: testname
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                private:

                    /**
                     * VpcId: vpc-xadsafsdasd
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Region: ap-guangzhou, ap-shanghai
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * VPC ID: 123456789
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * VPC name: testname
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ACCOUNTVPCINFOOUT_H_
