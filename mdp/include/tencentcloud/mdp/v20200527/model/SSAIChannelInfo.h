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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_SSAICHANNELINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_SSAICHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/SSAIConf.h>


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
                class SSAIChannelInfo : public AbstractModel
                {
                public:
                    SSAIChannelInfo();
                    ~SSAIChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SSAI configuration ID, globally unique identifier
                     * @return ID SSAI configuration ID, globally unique identifier
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置SSAI configuration ID, globally unique identifier
                     * @param _iD SSAI configuration ID, globally unique identifier
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Configuration name
                     * @return Name Configuration name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Configuration name
                     * @param _name Configuration name
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
                     * 获取Content source stream prefix
                     * @return ContentSource Content source stream prefix
                     * 
                     */
                    std::string GetContentSource() const;

                    /**
                     * 设置Content source stream prefix
                     * @param _contentSource Content source stream prefix
                     * 
                     */
                    void SetContentSource(const std::string& _contentSource);

                    /**
                     * 判断参数 ContentSource 是否已赋值
                     * @return ContentSource 是否已赋值
                     * 
                     */
                    bool ContentSourceHasBeenSet() const;

                    /**
                     * 获取Generated playback address prefix
                     * @return PlaybackPrefix Generated playback address prefix
                     * 
                     */
                    std::string GetPlaybackPrefix() const;

                    /**
                     * 设置Generated playback address prefix
                     * @param _playbackPrefix Generated playback address prefix
                     * 
                     */
                    void SetPlaybackPrefix(const std::string& _playbackPrefix);

                    /**
                     * 判断参数 PlaybackPrefix 是否已赋值
                     * @return PlaybackPrefix 是否已赋值
                     * 
                     */
                    bool PlaybackPrefixHasBeenSet() const;

                    /**
                     * 获取SSAI configuration info
                     * @return SSAIInfo SSAI configuration info
                     * 
                     */
                    SSAIConf GetSSAIInfo() const;

                    /**
                     * 设置SSAI configuration info
                     * @param _sSAIInfo SSAI configuration info
                     * 
                     */
                    void SetSSAIInfo(const SSAIConf& _sSAIInfo);

                    /**
                     * 判断参数 SSAIInfo 是否已赋值
                     * @return SSAIInfo 是否已赋值
                     * 
                     */
                    bool SSAIInfoHasBeenSet() const;

                    /**
                     * 获取Region info
                     * @return Region Region info
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region info
                     * @param _region Region info
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
                     * SSAI configuration ID, globally unique identifier
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Configuration name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Content source stream prefix
                     */
                    std::string m_contentSource;
                    bool m_contentSourceHasBeenSet;

                    /**
                     * Generated playback address prefix
                     */
                    std::string m_playbackPrefix;
                    bool m_playbackPrefixHasBeenSet;

                    /**
                     * SSAI configuration info
                     */
                    SSAIConf m_sSAIInfo;
                    bool m_sSAIInfoHasBeenSet;

                    /**
                     * Region info
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_SSAICHANNELINFO_H_
