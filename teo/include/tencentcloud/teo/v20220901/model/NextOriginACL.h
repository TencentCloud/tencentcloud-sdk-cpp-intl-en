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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_NEXTORIGINACL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_NEXTORIGINACL_H_

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
                * When origin ACLs are updated, this field will be returned with the next version of the IP range to take effect, including a comparison with the currently effective IP range.
                */
                class NextOriginACL : public AbstractModel
                {
                public:
                    NextOriginACL();
                    ~NextOriginACL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Version number.
                     * @return Version Version number.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version number.
                     * @param _version Version number.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Version effective time, which adopts UTC+8 and follows the date and time format of the ISO 8601 standard.
                     * @return PlannedActiveTime Version effective time, which adopts UTC+8 and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetPlannedActiveTime() const;

                    /**
                     * 设置Version effective time, which adopts UTC+8 and follows the date and time format of the ISO 8601 standard.
                     * @param _plannedActiveTime Version effective time, which adopts UTC+8 and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    void SetPlannedActiveTime(const std::string& _plannedActiveTime);

                    /**
                     * 判断参数 PlannedActiveTime 是否已赋值
                     * @return PlannedActiveTime 是否已赋值
                     * 
                     */
                    bool PlannedActiveTimeHasBeenSet() const;

                    /**
                     * 获取IP range details.
                     * @return EntireAddresses IP range details.
                     * 
                     */
                    Addresses GetEntireAddresses() const;

                    /**
                     * 设置IP range details.
                     * @param _entireAddresses IP range details.
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
                     * 获取The latest origin IP range newly-added compared with the origin IP range in CurrentOrginACL.
                     * @return AddedAddresses The latest origin IP range newly-added compared with the origin IP range in CurrentOrginACL.
                     * 
                     */
                    Addresses GetAddedAddresses() const;

                    /**
                     * 设置The latest origin IP range newly-added compared with the origin IP range in CurrentOrginACL.
                     * @param _addedAddresses The latest origin IP range newly-added compared with the origin IP range in CurrentOrginACL.
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
                     * 获取The latest origin IP range deleted compared with the origin IP range in CurrentOrginACL.
                     * @return RemovedAddresses The latest origin IP range deleted compared with the origin IP range in CurrentOrginACL.
                     * 
                     */
                    Addresses GetRemovedAddresses() const;

                    /**
                     * 设置The latest origin IP range deleted compared with the origin IP range in CurrentOrginACL.
                     * @param _removedAddresses The latest origin IP range deleted compared with the origin IP range in CurrentOrginACL.
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
                     * 获取The latest origin IP range is unchanged compared with the origin IP range in CurrentOrginACL.
                     * @return NoChangeAddresses The latest origin IP range is unchanged compared with the origin IP range in CurrentOrginACL.
                     * 
                     */
                    Addresses GetNoChangeAddresses() const;

                    /**
                     * 设置The latest origin IP range is unchanged compared with the origin IP range in CurrentOrginACL.
                     * @param _noChangeAddresses The latest origin IP range is unchanged compared with the origin IP range in CurrentOrginACL.
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
                     * Version number.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Version effective time, which adopts UTC+8 and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_plannedActiveTime;
                    bool m_plannedActiveTimeHasBeenSet;

                    /**
                     * IP range details.
                     */
                    Addresses m_entireAddresses;
                    bool m_entireAddressesHasBeenSet;

                    /**
                     * The latest origin IP range newly-added compared with the origin IP range in CurrentOrginACL.
                     */
                    Addresses m_addedAddresses;
                    bool m_addedAddressesHasBeenSet;

                    /**
                     * The latest origin IP range deleted compared with the origin IP range in CurrentOrginACL.
                     */
                    Addresses m_removedAddresses;
                    bool m_removedAddressesHasBeenSet;

                    /**
                     * The latest origin IP range is unchanged compared with the origin IP range in CurrentOrginACL.
                     */
                    Addresses m_noChangeAddresses;
                    bool m_noChangeAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_NEXTORIGINACL_H_
