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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CHANNELINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/PointInfo.h>
#include <tencentcloud/mdp/v20200527/model/CacheInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Channel information.
                */
                class ChannelInfo : public AbstractModel
                {
                public:
                    ChannelInfo();
                    ~ChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel ID.
                     * @return Id Channel ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel ID.
                     * @param _id Channel ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Channel name.
                     * @return Name Channel name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name.
                     * @param _name Channel name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Channel protocol.
                     * @return Protocol Channel protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Channel protocol.
                     * @param _protocol Channel protocol.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Channel input and output.
                     * @return Points Channel input and output.
                     * 
                     */
                    PointInfo GetPoints() const;

                    /**
                     * 设置Channel input and output.
                     * @param _points Channel input and output.
                     * 
                     */
                    void SetPoints(const PointInfo& _points);

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

                    /**
                     * 获取Cache configuration
Note: this field may return `null`, indicating that no valid value was found.
                     * @return CacheInfo Cache configuration
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    CacheInfo GetCacheInfo() const;

                    /**
                     * 设置Cache configuration
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _cacheInfo Cache configuration
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetCacheInfo(const CacheInfo& _cacheInfo);

                    /**
                     * 判断参数 CacheInfo 是否已赋值
                     * @return CacheInfo 是否已赋值
                     * 
                     */
                    bool CacheInfoHasBeenSet() const;

                private:

                    /**
                     * Channel ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Channel name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Channel protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Channel input and output.
                     */
                    PointInfo m_points;
                    bool m_pointsHasBeenSet;

                    /**
                     * Cache configuration
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    CacheInfo m_cacheInfo;
                    bool m_cacheInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CHANNELINFO_H_
