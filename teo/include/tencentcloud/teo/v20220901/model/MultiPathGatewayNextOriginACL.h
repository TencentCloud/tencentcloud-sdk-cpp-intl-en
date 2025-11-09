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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYNEXTORIGINACL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYNEXTORIGINACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Addresses.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * When the origin IP range is updated, this field will be returned with the next version's effective origin IP range, including a comparison with the currently effective origin IP range.
                */
                class MultiPathGatewayNextOriginACL : public AbstractModel
                {
                public:
                    MultiPathGatewayNextOriginACL();
                    ~MultiPathGatewayNextOriginACL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the version number.
                     * @return Version Specifies the version number.
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置Specifies the version number.
                     * @param _version Specifies the version number.
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Describes the IP range details for origin servers.
                     * @return EntireAddresses Describes the IP range details for origin servers.
                     * 
                     */
                    Addresses GetEntireAddresses() const;

                    /**
                     * 设置Describes the IP range details for origin servers.
                     * @param _entireAddresses Describes the IP range details for origin servers.
                     * 
                     */
                    void SetEntireAddresses(const Addresses& _entireAddresses);

                    /**
                     * 判断参数 EntireAddresses 是否已赋值
                     * @return EntireAddresses 是否已赋值
                     * 
                     */
                    bool EntireAddressesHasBeenSet() const;

                    /**
                     * 获取The latest origin IP range newly added compared with the origin IP range in MultiPathGatewayCurrentOrginACL.
                     * @return AddedAddresses The latest origin IP range newly added compared with the origin IP range in MultiPathGatewayCurrentOrginACL.
                     * 
                     */
                    Addresses GetAddedAddresses() const;

                    /**
                     * 设置The latest origin IP range newly added compared with the origin IP range in MultiPathGatewayCurrentOrginACL.
                     * @param _addedAddresses The latest origin IP range newly added compared with the origin IP range in MultiPathGatewayCurrentOrginACL.
                     * 
                     */
                    void SetAddedAddresses(const Addresses& _addedAddresses);

                    /**
                     * 判断参数 AddedAddresses 是否已赋值
                     * @return AddedAddresses 是否已赋值
                     * 
                     */
                    bool AddedAddressesHasBeenSet() const;

                    /**
                     * 获取Specifies the latest IP address range removed from the origin IP range in MultiPathGatewayCurrentOrginACL compared with the original.
                     * @return RemovedAddresses Specifies the latest IP address range removed from the origin IP range in MultiPathGatewayCurrentOrginACL compared with the original.
                     * 
                     */
                    Addresses GetRemovedAddresses() const;

                    /**
                     * 设置Specifies the latest IP address range removed from the origin IP range in MultiPathGatewayCurrentOrginACL compared with the original.
                     * @param _removedAddresses Specifies the latest IP address range removed from the origin IP range in MultiPathGatewayCurrentOrginACL compared with the original.
                     * 
                     */
                    void SetRemovedAddresses(const Addresses& _removedAddresses);

                    /**
                     * 判断参数 RemovedAddresses 是否已赋值
                     * @return RemovedAddresses 是否已赋值
                     * 
                     */
                    bool RemovedAddressesHasBeenSet() const;

                    /**
                     * 获取The latest origin IP range unchanged compared with the origin IP range in MultiPathGatewayCurrentOrginACL.
                     * @return NoChangeAddresses The latest origin IP range unchanged compared with the origin IP range in MultiPathGatewayCurrentOrginACL.
                     * 
                     */
                    Addresses GetNoChangeAddresses() const;

                    /**
                     * 设置The latest origin IP range unchanged compared with the origin IP range in MultiPathGatewayCurrentOrginACL.
                     * @param _noChangeAddresses The latest origin IP range unchanged compared with the origin IP range in MultiPathGatewayCurrentOrginACL.
                     * 
                     */
                    void SetNoChangeAddresses(const Addresses& _noChangeAddresses);

                    /**
                     * 判断参数 NoChangeAddresses 是否已赋值
                     * @return NoChangeAddresses 是否已赋值
                     * 
                     */
                    bool NoChangeAddressesHasBeenSet() const;

                private:

                    /**
                     * Specifies the version number.
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Describes the IP range details for origin servers.
                     */
                    Addresses m_entireAddresses;
                    bool m_entireAddressesHasBeenSet;

                    /**
                     * The latest origin IP range newly added compared with the origin IP range in MultiPathGatewayCurrentOrginACL.
                     */
                    Addresses m_addedAddresses;
                    bool m_addedAddressesHasBeenSet;

                    /**
                     * Specifies the latest IP address range removed from the origin IP range in MultiPathGatewayCurrentOrginACL compared with the original.
                     */
                    Addresses m_removedAddresses;
                    bool m_removedAddressesHasBeenSet;

                    /**
                     * The latest origin IP range unchanged compared with the origin IP range in MultiPathGatewayCurrentOrginACL.
                     */
                    Addresses m_noChangeAddresses;
                    bool m_noChangeAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYNEXTORIGINACL_H_
