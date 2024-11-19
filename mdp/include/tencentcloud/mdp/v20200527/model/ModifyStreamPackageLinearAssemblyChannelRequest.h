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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYCHANNELREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/TimeShiftInfo.h>
#include <tencentcloud/mdp/v20200527/model/SlateInfo.h>
#include <tencentcloud/mdp/v20200527/model/OutputInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * ModifyStreamPackageLinearAssemblyChannel request structure.
                */
                class ModifyStreamPackageLinearAssemblyChannelRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageLinearAssemblyChannelRequest();
                    ~ModifyStreamPackageLinearAssemblyChannelRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Define the characteristics of the channel. Standard supports live broadcast and on-demand sources, while Basic only supports on-demand source arrangement.
                     * @return Tier Define the characteristics of the channel. Standard supports live broadcast and on-demand sources, while Basic only supports on-demand source arrangement.
                     * 
                     */
                    std::string GetTier() const;

                    /**
                     * 设置Define the characteristics of the channel. Standard supports live broadcast and on-demand sources, while Basic only supports on-demand source arrangement.
                     * @param _tier Define the characteristics of the channel. Standard supports live broadcast and on-demand sources, while Basic only supports on-demand source arrangement.
                     * 
                     */
                    void SetTier(const std::string& _tier);

                    /**
                     * 判断参数 Tier 是否已赋值
                     * @return Tier 是否已赋值
                     * 
                     */
                    bool TierHasBeenSet() const;

                    /**
                     * 获取The source switching mode in the channel is divided into Linear and Loop. Live broadcast only supports Linear.
Optional values: Linear, Loop.
                     * @return PlaybackMode The source switching mode in the channel is divided into Linear and Loop. Live broadcast only supports Linear.
Optional values: Linear, Loop.
                     * 
                     */
                    std::string GetPlaybackMode() const;

                    /**
                     * 设置The source switching mode in the channel is divided into Linear and Loop. Live broadcast only supports Linear.
Optional values: Linear, Loop.
                     * @param _playbackMode The source switching mode in the channel is divided into Linear and Loop. Live broadcast only supports Linear.
Optional values: Linear, Loop.
                     * 
                     */
                    void SetPlaybackMode(const std::string& _playbackMode);

                    /**
                     * 判断参数 PlaybackMode 是否已赋值
                     * @return PlaybackMode 是否已赋值
                     * 
                     */
                    bool PlaybackModeHasBeenSet() const;

                    /**
                     * 获取Time shift on switch.
                     * @return TimeShiftEnable Time shift on switch.
                     * 
                     */
                    bool GetTimeShiftEnable() const;

                    /**
                     * 设置Time shift on switch.
                     * @param _timeShiftEnable Time shift on switch.
                     * 
                     */
                    void SetTimeShiftEnable(const bool& _timeShiftEnable);

                    /**
                     * 判断参数 TimeShiftEnable 是否已赋值
                     * @return TimeShiftEnable 是否已赋值
                     * 
                     */
                    bool TimeShiftEnableHasBeenSet() const;

                    /**
                     * 获取Time shift configuration.
                     * @return TimeShiftConf Time shift configuration.
                     * 
                     */
                    TimeShiftInfo GetTimeShiftConf() const;

                    /**
                     * 设置Time shift configuration.
                     * @param _timeShiftConf Time shift configuration.
                     * 
                     */
                    void SetTimeShiftConf(const TimeShiftInfo& _timeShiftConf);

                    /**
                     * 判断参数 TimeShiftConf 是否已赋值
                     * @return TimeShiftConf 是否已赋值
                     * 
                     */
                    bool TimeShiftConfHasBeenSet() const;

                    /**
                     * 获取padding configuration.
                     * @return SlateConf padding configuration.
                     * 
                     */
                    SlateInfo GetSlateConf() const;

                    /**
                     * 设置padding configuration.
                     * @param _slateConf padding configuration.
                     * 
                     */
                    void SetSlateConf(const SlateInfo& _slateConf);

                    /**
                     * 判断参数 SlateConf 是否已赋值
                     * @return SlateConf 是否已赋值
                     * 
                     */
                    bool SlateConfHasBeenSet() const;

                    /**
                     * 获取Output configuration.
                     * @return Outputs Output configuration.
                     * 
                     */
                    std::vector<OutputInfo> GetOutputs() const;

                    /**
                     * 设置Output configuration.
                     * @param _outputs Output configuration.
                     * 
                     */
                    void SetOutputs(const std::vector<OutputInfo>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                private:

                    /**
                     * Channel ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Modified name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Define the characteristics of the channel. Standard supports live broadcast and on-demand sources, while Basic only supports on-demand source arrangement.
                     */
                    std::string m_tier;
                    bool m_tierHasBeenSet;

                    /**
                     * The source switching mode in the channel is divided into Linear and Loop. Live broadcast only supports Linear.
Optional values: Linear, Loop.
                     */
                    std::string m_playbackMode;
                    bool m_playbackModeHasBeenSet;

                    /**
                     * Time shift on switch.
                     */
                    bool m_timeShiftEnable;
                    bool m_timeShiftEnableHasBeenSet;

                    /**
                     * Time shift configuration.
                     */
                    TimeShiftInfo m_timeShiftConf;
                    bool m_timeShiftConfHasBeenSet;

                    /**
                     * padding configuration.
                     */
                    SlateInfo m_slateConf;
                    bool m_slateConfHasBeenSet;

                    /**
                     * Output configuration.
                     */
                    std::vector<OutputInfo> m_outputs;
                    bool m_outputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYCHANNELREQUEST_H_
