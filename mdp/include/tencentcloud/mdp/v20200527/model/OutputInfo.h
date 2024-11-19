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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_OUTPUTINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_OUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/ManifestInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Channel linear assembly output information.
                */
                class OutputInfo : public AbstractModel
                {
                public:
                    OutputInfo();
                    ~OutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HLS DASH.
                     * @return Type HLS DASH.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置HLS DASH.
                     * @param _type HLS DASH.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The output group name can be associated with the source group name.
                     * @return GroupName The output group name can be associated with the source group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置The output group name can be associated with the source group name.
                     * @param _groupName The output group name can be associated with the source group name.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取The file name output by the channel program after scheduling.
                     * @return ManifestName The file name output by the channel program after scheduling.
                     * 
                     */
                    std::string GetManifestName() const;

                    /**
                     * 设置The file name output by the channel program after scheduling.
                     * @param _manifestName The file name output by the channel program after scheduling.
                     * 
                     */
                    void SetManifestName(const std::string& _manifestName);

                    /**
                     * 判断参数 ManifestName 是否已赋值
                     * @return ManifestName 是否已赋值
                     * 
                     */
                    bool ManifestNameHasBeenSet() const;

                    /**
                     * 获取Advertisement configuration.
                     * @return ManifestConf Advertisement configuration.
                     * 
                     */
                    ManifestInfo GetManifestConf() const;

                    /**
                     * 设置Advertisement configuration.
                     * @param _manifestConf Advertisement configuration.
                     * 
                     */
                    void SetManifestConf(const ManifestInfo& _manifestConf);

                    /**
                     * 判断参数 ManifestConf 是否已赋值
                     * @return ManifestConf 是否已赋值
                     * 
                     */
                    bool ManifestConfHasBeenSet() const;

                    /**
                     * 获取Playback address.
                     * @return PlaybackURL Playback address.
                     * 
                     */
                    std::string GetPlaybackURL() const;

                    /**
                     * 设置Playback address.
                     * @param _playbackURL Playback address.
                     * 
                     */
                    void SetPlaybackURL(const std::string& _playbackURL);

                    /**
                     * 判断参数 PlaybackURL 是否已赋值
                     * @return PlaybackURL 是否已赋值
                     * 
                     */
                    bool PlaybackURLHasBeenSet() const;

                private:

                    /**
                     * HLS DASH.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The output group name can be associated with the source group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The file name output by the channel program after scheduling.
                     */
                    std::string m_manifestName;
                    bool m_manifestNameHasBeenSet;

                    /**
                     * Advertisement configuration.
                     */
                    ManifestInfo m_manifestConf;
                    bool m_manifestConfHasBeenSet;

                    /**
                     * Playback address.
                     */
                    std::string m_playbackURL;
                    bool m_playbackURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_OUTPUTINFO_H_
