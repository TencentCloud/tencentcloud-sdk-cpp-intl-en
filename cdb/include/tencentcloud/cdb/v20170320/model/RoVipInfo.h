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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROVIPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROVIPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * VIP information of the read-only instance
                */
                class RoVipInfo : public AbstractModel
                {
                public:
                    RoVipInfo();
                    ~RoVipInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VIP status of the read-only instance
                     * @return RoVipStatus VIP status of the read-only instance
                     * 
                     */
                    int64_t GetRoVipStatus() const;

                    /**
                     * 设置VIP status of the read-only instance
                     * @param _roVipStatus VIP status of the read-only instance
                     * 
                     */
                    void SetRoVipStatus(const int64_t& _roVipStatus);

                    /**
                     * 判断参数 RoVipStatus 是否已赋值
                     * @return RoVipStatus 是否已赋值
                     * 
                     */
                    bool RoVipStatusHasBeenSet() const;

                    /**
                     * 获取VPC subnet of the read-only instance
                     * @return RoSubnetId VPC subnet of the read-only instance
                     * 
                     */
                    int64_t GetRoSubnetId() const;

                    /**
                     * 设置VPC subnet of the read-only instance
                     * @param _roSubnetId VPC subnet of the read-only instance
                     * 
                     */
                    void SetRoSubnetId(const int64_t& _roSubnetId);

                    /**
                     * 判断参数 RoSubnetId 是否已赋值
                     * @return RoSubnetId 是否已赋值
                     * 
                     */
                    bool RoSubnetIdHasBeenSet() const;

                    /**
                     * 获取VPC of the read-only instance
                     * @return RoVpcId VPC of the read-only instance
                     * 
                     */
                    int64_t GetRoVpcId() const;

                    /**
                     * 设置VPC of the read-only instance
                     * @param _roVpcId VPC of the read-only instance
                     * 
                     */
                    void SetRoVpcId(const int64_t& _roVpcId);

                    /**
                     * 判断参数 RoVpcId 是否已赋值
                     * @return RoVpcId 是否已赋值
                     * 
                     */
                    bool RoVpcIdHasBeenSet() const;

                    /**
                     * 获取VIP port number of the read-only instance
                     * @return RoVport VIP port number of the read-only instance
                     * 
                     */
                    int64_t GetRoVport() const;

                    /**
                     * 设置VIP port number of the read-only instance
                     * @param _roVport VIP port number of the read-only instance
                     * 
                     */
                    void SetRoVport(const int64_t& _roVport);

                    /**
                     * 判断参数 RoVport 是否已赋值
                     * @return RoVport 是否已赋值
                     * 
                     */
                    bool RoVportHasBeenSet() const;

                    /**
                     * 获取VIP of the read-only instance
                     * @return RoVip VIP of the read-only instance
                     * 
                     */
                    std::string GetRoVip() const;

                    /**
                     * 设置VIP of the read-only instance
                     * @param _roVip VIP of the read-only instance
                     * 
                     */
                    void SetRoVip(const std::string& _roVip);

                    /**
                     * 判断参数 RoVip 是否已赋值
                     * @return RoVip 是否已赋值
                     * 
                     */
                    bool RoVipHasBeenSet() const;

                private:

                    /**
                     * VIP status of the read-only instance
                     */
                    int64_t m_roVipStatus;
                    bool m_roVipStatusHasBeenSet;

                    /**
                     * VPC subnet of the read-only instance
                     */
                    int64_t m_roSubnetId;
                    bool m_roSubnetIdHasBeenSet;

                    /**
                     * VPC of the read-only instance
                     */
                    int64_t m_roVpcId;
                    bool m_roVpcIdHasBeenSet;

                    /**
                     * VIP port number of the read-only instance
                     */
                    int64_t m_roVport;
                    bool m_roVportHasBeenSet;

                    /**
                     * VIP of the read-only instance
                     */
                    std::string m_roVip;
                    bool m_roVipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROVIPINFO_H_
