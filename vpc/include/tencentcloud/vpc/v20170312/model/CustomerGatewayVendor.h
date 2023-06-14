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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAYVENDOR_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAYVENDOR_H_

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
                * Customer gateway vendor information object.
                */
                class CustomerGatewayVendor : public AbstractModel
                {
                public:
                    CustomerGatewayVendor();
                    ~CustomerGatewayVendor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Platform.
                     * @return Platform Platform.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Platform.
                     * @param _platform Platform.
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Software version.
                     * @return SoftwareVersion Software version.
                     * 
                     */
                    std::string GetSoftwareVersion() const;

                    /**
                     * 设置Software version.
                     * @param _softwareVersion Software version.
                     * 
                     */
                    void SetSoftwareVersion(const std::string& _softwareVersion);

                    /**
                     * 判断参数 SoftwareVersion 是否已赋值
                     * @return SoftwareVersion 是否已赋值
                     * 
                     */
                    bool SoftwareVersionHasBeenSet() const;

                    /**
                     * 获取Vendor name.
                     * @return VendorName Vendor name.
                     * 
                     */
                    std::string GetVendorName() const;

                    /**
                     * 设置Vendor name.
                     * @param _vendorName Vendor name.
                     * 
                     */
                    void SetVendorName(const std::string& _vendorName);

                    /**
                     * 判断参数 VendorName 是否已赋值
                     * @return VendorName 是否已赋值
                     * 
                     */
                    bool VendorNameHasBeenSet() const;

                private:

                    /**
                     * Platform.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Software version.
                     */
                    std::string m_softwareVersion;
                    bool m_softwareVersionHasBeenSet;

                    /**
                     * Vendor name.
                     */
                    std::string m_vendorName;
                    bool m_vendorNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAYVENDOR_H_
