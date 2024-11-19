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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_LINEARASSEMBLYPROGRAMINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_LINEARASSEMBLYPROGRAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/PlaybackInfo.h>
#include <tencentcloud/mdp/v20200527/model/AdBreakInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Channel linear assembly program information.
                */
                class LinearAssemblyProgramInfo : public AbstractModel
                {
                public:
                    LinearAssemblyProgramInfo();
                    ~LinearAssemblyProgramInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel linear assembly program information.
                     * @return Name Channel linear assembly program information.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel linear assembly program information.
                     * @param _name Channel linear assembly program information.
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
                     * 获取The type of the arrangement target source, divided into live broadcast and on-demand.
                     * @return SourceType The type of the arrangement target source, divided into live broadcast and on-demand.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置The type of the arrangement target source, divided into live broadcast and on-demand.
                     * @param _sourceType The type of the arrangement target source, divided into live broadcast and on-demand.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取The associated source location id.
                     * @return SourceLocationId The associated source location id.
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置The associated source location id.
                     * @param _sourceLocationId The associated source location id.
                     * 
                     */
                    void SetSourceLocationId(const std::string& _sourceLocationId);

                    /**
                     * 判断参数 SourceLocationId 是否已赋值
                     * @return SourceLocationId 是否已赋值
                     * 
                     */
                    bool SourceLocationIdHasBeenSet() const;

                    /**
                     * 获取SourceId, uniquely identifies a source.
                     * @return SourceId SourceId, uniquely identifies a source.
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置SourceId, uniquely identifies a source.
                     * @param _sourceId SourceId, uniquely identifies a source.
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取The associated live broadcast or on-demand broadcast, source name, and location are globally unique.
                     * @return SourceName The associated live broadcast or on-demand broadcast, source name, and location are globally unique.
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置The associated live broadcast or on-demand broadcast, source name, and location are globally unique.
                     * @param _sourceName The associated live broadcast or on-demand broadcast, source name, and location are globally unique.
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取The bound channel.
                     * @return AttachedChannel The bound channel.
                     * 
                     */
                    std::string GetAttachedChannel() const;

                    /**
                     * 设置The bound channel.
                     * @param _attachedChannel The bound channel.
                     * 
                     */
                    void SetAttachedChannel(const std::string& _attachedChannel);

                    /**
                     * 判断参数 AttachedChannel 是否已赋值
                     * @return AttachedChannel 是否已赋值
                     * 
                     */
                    bool AttachedChannelHasBeenSet() const;

                    /**
                     * 获取Play configuration.
                     * @return PlaybackConf Play configuration.
                     * 
                     */
                    PlaybackInfo GetPlaybackConf() const;

                    /**
                     * 设置Play configuration.
                     * @param _playbackConf Play configuration.
                     * 
                     */
                    void SetPlaybackConf(const PlaybackInfo& _playbackConf);

                    /**
                     * 判断参数 PlaybackConf 是否已赋值
                     * @return PlaybackConf 是否已赋值
                     * 
                     */
                    bool PlaybackConfHasBeenSet() const;

                    /**
                     * 获取AdBreaks.
                     * @return AdBreaks AdBreaks.
                     * 
                     */
                    std::vector<AdBreakInfo> GetAdBreaks() const;

                    /**
                     * 设置AdBreaks.
                     * @param _adBreaks AdBreaks.
                     * 
                     */
                    void SetAdBreaks(const std::vector<AdBreakInfo>& _adBreaks);

                    /**
                     * 判断参数 AdBreaks 是否已赋值
                     * @return AdBreaks 是否已赋值
                     * 
                     */
                    bool AdBreaksHasBeenSet() const;

                    /**
                     * 获取ID.
                     * @return Id ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID.
                     * @param _id ID.
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
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
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
                     * 获取SourceLocation name.
                     * @return SourceLocationName SourceLocation name.
                     * 
                     */
                    std::string GetSourceLocationName() const;

                    /**
                     * 设置SourceLocation name.
                     * @param _sourceLocationName SourceLocation name.
                     * 
                     */
                    void SetSourceLocationName(const std::string& _sourceLocationName);

                    /**
                     * 判断参数 SourceLocationName 是否已赋值
                     * @return SourceLocationName 是否已赋值
                     * 
                     */
                    bool SourceLocationNameHasBeenSet() const;

                private:

                    /**
                     * Channel linear assembly program information.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The type of the arrangement target source, divided into live broadcast and on-demand.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * The associated source location id.
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * SourceId, uniquely identifies a source.
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * The associated live broadcast or on-demand broadcast, source name, and location are globally unique.
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * The bound channel.
                     */
                    std::string m_attachedChannel;
                    bool m_attachedChannelHasBeenSet;

                    /**
                     * Play configuration.
                     */
                    PlaybackInfo m_playbackConf;
                    bool m_playbackConfHasBeenSet;

                    /**
                     * AdBreaks.
                     */
                    std::vector<AdBreakInfo> m_adBreaks;
                    bool m_adBreaksHasBeenSet;

                    /**
                     * ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * SourceLocation name.
                     */
                    std::string m_sourceLocationName;
                    bool m_sourceLocationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_LINEARASSEMBLYPROGRAMINFO_H_
