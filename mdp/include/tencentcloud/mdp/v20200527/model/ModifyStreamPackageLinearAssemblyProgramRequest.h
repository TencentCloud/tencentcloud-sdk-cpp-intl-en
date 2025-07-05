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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYPROGRAMREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYPROGRAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/PlaybackInfoReq.h>
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
                * ModifyStreamPackageLinearAssemblyProgram request structure.
                */
                class ModifyStreamPackageLinearAssemblyProgramRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageLinearAssemblyProgramRequest();
                    ~ModifyStreamPackageLinearAssemblyProgramRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Program ID.
                     * @return Id Program ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Program ID.
                     * @param _id Program ID.
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
                     * 获取Modified name.
                     * @return Name Modified name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Modified name.
                     * @param _name Modified name.
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
                     * 获取The associated source location.
                     * @return SourceLocationId The associated source location.
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置The associated source location.
                     * @param _sourceLocationId The associated source location.
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
                     * 获取PlaybackConf.
                     * @return PlaybackConf PlaybackConf.
                     * 
                     */
                    PlaybackInfoReq GetPlaybackConf() const;

                    /**
                     * 设置PlaybackConf.
                     * @param _playbackConf PlaybackConf.
                     * 
                     */
                    void SetPlaybackConf(const PlaybackInfoReq& _playbackConf);

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

                private:

                    /**
                     * Program ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Modified name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The type of the arrangement target source, divided into live broadcast and on-demand.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * The associated source location.
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * The associated live broadcast or on-demand broadcast, source name, and location are globally unique.
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * PlaybackConf.
                     */
                    PlaybackInfoReq m_playbackConf;
                    bool m_playbackConfHasBeenSet;

                    /**
                     * AdBreaks.
                     */
                    std::vector<AdBreakInfo> m_adBreaks;
                    bool m_adBreaksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYPROGRAMREQUEST_H_
