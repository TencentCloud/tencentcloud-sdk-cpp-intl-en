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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DOMAINRECORDINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DOMAINRECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * 
                */
                class DomainRecordInfo : public AbstractModel
                {
                public:
                    DomainRecordInfo();
                    ~DomainRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Associated playback domain name.
                     * @return CdnDomain Associated playback domain name.
                     * 
                     */
                    std::string GetCdnDomain() const;

                    /**
                     * 设置Associated playback domain name.
                     * @param _cdnDomain Associated playback domain name.
                     * 
                     */
                    void SetCdnDomain(const std::string& _cdnDomain);

                    /**
                     * 判断参数 CdnDomain 是否已赋值
                     * @return CdnDomain 是否已赋值
                     * 
                     */
                    bool CdnDomainHasBeenSet() const;

                    /**
                     * 获取Belonging region.
                     * @return Region Belonging region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Belonging region.
                     * @param _region Belonging region.
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
                     * 获取Channel ID.
                     * @return ChannelId Channel ID.
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID.
                     * @param _channelId Channel ID.
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取The ID of a record
                     * @return Id The ID of a record
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The ID of a record
                     * @param _id The ID of a record
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Associated playback domain name.
                     */
                    std::string m_cdnDomain;
                    bool m_cdnDomainHasBeenSet;

                    /**
                     * Belonging region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Channel ID.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * The ID of a record
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DOMAINRECORDINFO_H_
