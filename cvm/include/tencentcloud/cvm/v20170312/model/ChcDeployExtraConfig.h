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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CHCDEPLOYEXTRACONFIG_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CHCDEPLOYEXTRACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Configuration options for MiniOS of the CHC deployment network
                */
                class ChcDeployExtraConfig : public AbstractModel
                {
                public:
                    ChcDeployExtraConfig();
                    ~ChcDeployExtraConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MinIO type: whether to use Tencent Cloud's minios or the customer's own minios.
                     * @return MiniOsType MinIO type: whether to use Tencent Cloud's minios or the customer's own minios.
                     * 
                     */
                    std::string GetMiniOsType() const;

                    /**
                     * 设置MinIO type: whether to use Tencent Cloud's minios or the customer's own minios.
                     * @param _miniOsType MinIO type: whether to use Tencent Cloud's minios or the customer's own minios.
                     * 
                     */
                    void SetMiniOsType(const std::string& _miniOsType);

                    /**
                     * 判断参数 MiniOsType 是否已赋值
                     * @return MiniOsType 是否已赋值
                     * 
                     */
                    bool MiniOsTypeHasBeenSet() const;

                    /**
                     * 获取Server architecture and boot mode. Value: x86_legacy, arm_uefi.
                     * @return BootType Server architecture and boot mode. Value: x86_legacy, arm_uefi.
                     * 
                     */
                    std::string GetBootType() const;

                    /**
                     * 设置Server architecture and boot mode. Value: x86_legacy, arm_uefi.
                     * @param _bootType Server architecture and boot mode. Value: x86_legacy, arm_uefi.
                     * 
                     */
                    void SetBootType(const std::string& _bootType);

                    /**
                     * 判断参数 BootType 是否已赋值
                     * @return BootType 是否已赋值
                     * 
                     */
                    bool BootTypeHasBeenSet() const;

                    /**
                     * 获取The boot file used by PXE. Default: pxelinux.0.
                     * @return BootFile The boot file used by PXE. Default: pxelinux.0.
                     * 
                     */
                    std::string GetBootFile() const;

                    /**
                     * 设置The boot file used by PXE. Default: pxelinux.0.
                     * @param _bootFile The boot file used by PXE. Default: pxelinux.0.
                     * 
                     */
                    void SetBootFile(const std::string& _bootFile);

                    /**
                     * 判断参数 BootFile 是否已赋值
                     * @return BootFile 是否已赋值
                     * 
                     */
                    bool BootFileHasBeenSet() const;

                    /**
                     * 获取tftp server ip address.
                     * @return NextServerAddress tftp server ip address.
                     * 
                     */
                    std::string GetNextServerAddress() const;

                    /**
                     * 设置tftp server ip address.
                     * @param _nextServerAddress tftp server ip address.
                     * 
                     */
                    void SetNextServerAddress(const std::string& _nextServerAddress);

                    /**
                     * 判断参数 NextServerAddress 是否已赋值
                     * @return NextServerAddress 是否已赋值
                     * 
                     */
                    bool NextServerAddressHasBeenSet() const;

                private:

                    /**
                     * MinIO type: whether to use Tencent Cloud's minios or the customer's own minios.
                     */
                    std::string m_miniOsType;
                    bool m_miniOsTypeHasBeenSet;

                    /**
                     * Server architecture and boot mode. Value: x86_legacy, arm_uefi.
                     */
                    std::string m_bootType;
                    bool m_bootTypeHasBeenSet;

                    /**
                     * The boot file used by PXE. Default: pxelinux.0.
                     */
                    std::string m_bootFile;
                    bool m_bootFileHasBeenSet;

                    /**
                     * tftp server ip address.
                     */
                    std::string m_nextServerAddress;
                    bool m_nextServerAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CHCDEPLOYEXTRACONFIG_H_
