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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIP_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmArea.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm Ip information
                */
                class DspmIp : public AbstractModel
                {
                public:
                    DspmIp();
                    ~DspmIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP address
                     * @return Ip IP address
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP address
                     * @param _ip IP address
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取ip type. public: public network; private: private network
                     * @return IpType ip type. public: public network; private: private network
                     * 
                     */
                    std::string GetIpType() const;

                    /**
                     * 设置ip type. public: public network; private: private network
                     * @param _ipType ip type. public: public network; private: private network
                     * 
                     */
                    void SetIpType(const std::string& _ipType);

                    /**
                     * 判断参数 IpType 是否已赋值
                     * @return IpType 是否已赋值
                     * 
                     */
                    bool IpTypeHasBeenSet() const;

                    /**
                     * 获取ip tag information
                     * @return Remark ip tag information
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置ip tag information
                     * @param _remark ip tag information
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether it has been tagged with information
                     * @return IsRemarked Whether it has been tagged with information
                     * 
                     */
                    int64_t GetIsRemarked() const;

                    /**
                     * 设置Whether it has been tagged with information
                     * @param _isRemarked Whether it has been tagged with information
                     * 
                     */
                    void SetIsRemarked(const int64_t& _isRemarked);

                    /**
                     * 判断参数 IsRemarked 是否已赋值
                     * @return IsRemarked 是否已赋值
                     * 
                     */
                    bool IsRemarkedHasBeenSet() const;

                    /**
                     * 获取ip belongs to the instance id
                     * @return ResourceInstanceId ip belongs to the instance id
                     * 
                     */
                    std::string GetResourceInstanceId() const;

                    /**
                     * 设置ip belongs to the instance id
                     * @param _resourceInstanceId ip belongs to the instance id
                     * 
                     */
                    void SetResourceInstanceId(const std::string& _resourceInstanceId);

                    /**
                     * 判断参数 ResourceInstanceId 是否已赋值
                     * @return ResourceInstanceId 是否已赋值
                     * 
                     */
                    bool ResourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取ip-associated product
                     * @return ResourceType ip-associated product
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置ip-associated product
                     * @param _resourceType ip-associated product
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取ip region
                     * @return Area ip region
                     * 
                     */
                    DspmArea GetArea() const;

                    /**
                     * 设置ip region
                     * @param _area ip region
                     * 
                     */
                    void SetArea(const DspmArea& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Whether it is a new ip address
                     * @return IsNewIp Whether it is a new ip address
                     * 
                     */
                    int64_t GetIsNewIp() const;

                    /**
                     * 设置Whether it is a new ip address
                     * @param _isNewIp Whether it is a new ip address
                     * 
                     */
                    void SetIsNewIp(const int64_t& _isNewIp);

                    /**
                     * 判断参数 IsNewIp 是否已赋值
                     * @return IsNewIp 是否已赋值
                     * 
                     */
                    bool IsNewIpHasBeenSet() const;

                private:

                    /**
                     * IP address
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * ip type. public: public network; private: private network
                     */
                    std::string m_ipType;
                    bool m_ipTypeHasBeenSet;

                    /**
                     * ip tag information
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether it has been tagged with information
                     */
                    int64_t m_isRemarked;
                    bool m_isRemarkedHasBeenSet;

                    /**
                     * ip belongs to the instance id
                     */
                    std::string m_resourceInstanceId;
                    bool m_resourceInstanceIdHasBeenSet;

                    /**
                     * ip-associated product
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * ip region
                     */
                    DspmArea m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Whether it is a new ip address
                     */
                    int64_t m_isNewIp;
                    bool m_isNewIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIP_H_
