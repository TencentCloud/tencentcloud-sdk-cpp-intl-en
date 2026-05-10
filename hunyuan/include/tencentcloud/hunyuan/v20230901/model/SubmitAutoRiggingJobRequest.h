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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITAUTORIGGINGJOBREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITAUTORIGGINGJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/InputFile3D.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * SubmitAutoRiggingJob request structure.
                */
                class SubmitAutoRiggingJobRequest : public AbstractModel
                {
                public:
                    SubmitAutoRiggingJobRequest();
                    ~SubmitAutoRiggingJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>3D Character Model File: Generates a 3D character animation based on the provided source model.<br>The character model must be in a standard T-Pose (a standing posture with both arms extended horizontally). You must select exactly one of the following 3D model file options; reference specifications:<br>fbx: 3D model file in FBX format; file size must not exceed 60 MB.<br>obj: 3D model file in OBJ format; file size must not exceed 60 MB.</p>
                     * @return File3D <p>3D Character Model File: Generates a 3D character animation based on the provided source model.<br>The character model must be in a standard T-Pose (a standing posture with both arms extended horizontally). You must select exactly one of the following 3D model file options; reference specifications:<br>fbx: 3D model file in FBX format; file size must not exceed 60 MB.<br>obj: 3D model file in OBJ format; file size must not exceed 60 MB.</p>
                     * 
                     */
                    InputFile3D GetFile3D() const;

                    /**
                     * 设置<p>3D Character Model File: Generates a 3D character animation based on the provided source model.<br>The character model must be in a standard T-Pose (a standing posture with both arms extended horizontally). You must select exactly one of the following 3D model file options; reference specifications:<br>fbx: 3D model file in FBX format; file size must not exceed 60 MB.<br>obj: 3D model file in OBJ format; file size must not exceed 60 MB.</p>
                     * @param _file3D <p>3D Character Model File: Generates a 3D character animation based on the provided source model.<br>The character model must be in a standard T-Pose (a standing posture with both arms extended horizontally). You must select exactly one of the following 3D model file options; reference specifications:<br>fbx: 3D model file in FBX format; file size must not exceed 60 MB.<br>obj: 3D model file in OBJ format; file size must not exceed 60 MB.</p>
                     * 
                     */
                    void SetFile3D(const InputFile3D& _file3D);

                    /**
                     * 判断参数 File3D 是否已赋值
                     * @return File3D 是否已赋值
                     * 
                     */
                    bool File3DHasBeenSet() const;

                    /**
                     * 获取<p>Preset Action Types (Reference Values):</p><ol><li>Roundhouse Kick </li><li>Left Hook </li><li>Charged Attack </li><li>Charged Punch </li><li>Two-Hit Combo </li><li>Two-Hit Combo - 2 </li><li>Backstep </li><li>Hit Reaction </li><li>Hit Reaction - 2 </li><li>Hit Reaction - 3 </li><li>Knockdown - 1 </li><li>Knockdown - 2 </li><li>Landing </li><li>Dejection </li><li>Throat Slash </li><li>Jab </li><li>Continuous Strikes </li><li>Kick </li><li>Side Kick </li><li>Tai Chi </li><li>Backflip </li><li>Crouching Turn </li><li>Walk - 1 </li><li>Walk - 2 </li><li>Walk - 3 </li><li>Idle - 1 </li><li>Idle - 2 </li><li>Street Dance </li><li>The Twist </li><li>Turn Left </li><li>Turn Right </li><li>Jog </li><li>Jog - 2 </li><li>Run </li><li>Sprint - 1 </li><li>Sprint - 2 </li><li>Sprint - 3 </li><li>Jump (In Place) - 1 </li><li>Sliding Tackle </li><li>Long Jump (Forward) </li><li>Long Jump (Forward) - 2 </li><li>Vault </li><li>Intimidation </li><li>Fall Forward </li><li>Turn Right </li><li>Jump (In Place) - 2 </li><li>Turn Around </li><li>Send Shockwave</li></ol>
                     * @return MotionType <p>Preset Action Types (Reference Values):</p><ol><li>Roundhouse Kick </li><li>Left Hook </li><li>Charged Attack </li><li>Charged Punch </li><li>Two-Hit Combo </li><li>Two-Hit Combo - 2 </li><li>Backstep </li><li>Hit Reaction </li><li>Hit Reaction - 2 </li><li>Hit Reaction - 3 </li><li>Knockdown - 1 </li><li>Knockdown - 2 </li><li>Landing </li><li>Dejection </li><li>Throat Slash </li><li>Jab </li><li>Continuous Strikes </li><li>Kick </li><li>Side Kick </li><li>Tai Chi </li><li>Backflip </li><li>Crouching Turn </li><li>Walk - 1 </li><li>Walk - 2 </li><li>Walk - 3 </li><li>Idle - 1 </li><li>Idle - 2 </li><li>Street Dance </li><li>The Twist </li><li>Turn Left </li><li>Turn Right </li><li>Jog </li><li>Jog - 2 </li><li>Run </li><li>Sprint - 1 </li><li>Sprint - 2 </li><li>Sprint - 3 </li><li>Jump (In Place) - 1 </li><li>Sliding Tackle </li><li>Long Jump (Forward) </li><li>Long Jump (Forward) - 2 </li><li>Vault </li><li>Intimidation </li><li>Fall Forward </li><li>Turn Right </li><li>Jump (In Place) - 2 </li><li>Turn Around </li><li>Send Shockwave</li></ol>
                     * 
                     */
                    int64_t GetMotionType() const;

                    /**
                     * 设置<p>Preset Action Types (Reference Values):</p><ol><li>Roundhouse Kick </li><li>Left Hook </li><li>Charged Attack </li><li>Charged Punch </li><li>Two-Hit Combo </li><li>Two-Hit Combo - 2 </li><li>Backstep </li><li>Hit Reaction </li><li>Hit Reaction - 2 </li><li>Hit Reaction - 3 </li><li>Knockdown - 1 </li><li>Knockdown - 2 </li><li>Landing </li><li>Dejection </li><li>Throat Slash </li><li>Jab </li><li>Continuous Strikes </li><li>Kick </li><li>Side Kick </li><li>Tai Chi </li><li>Backflip </li><li>Crouching Turn </li><li>Walk - 1 </li><li>Walk - 2 </li><li>Walk - 3 </li><li>Idle - 1 </li><li>Idle - 2 </li><li>Street Dance </li><li>The Twist </li><li>Turn Left </li><li>Turn Right </li><li>Jog </li><li>Jog - 2 </li><li>Run </li><li>Sprint - 1 </li><li>Sprint - 2 </li><li>Sprint - 3 </li><li>Jump (In Place) - 1 </li><li>Sliding Tackle </li><li>Long Jump (Forward) </li><li>Long Jump (Forward) - 2 </li><li>Vault </li><li>Intimidation </li><li>Fall Forward </li><li>Turn Right </li><li>Jump (In Place) - 2 </li><li>Turn Around </li><li>Send Shockwave</li></ol>
                     * @param _motionType <p>Preset Action Types (Reference Values):</p><ol><li>Roundhouse Kick </li><li>Left Hook </li><li>Charged Attack </li><li>Charged Punch </li><li>Two-Hit Combo </li><li>Two-Hit Combo - 2 </li><li>Backstep </li><li>Hit Reaction </li><li>Hit Reaction - 2 </li><li>Hit Reaction - 3 </li><li>Knockdown - 1 </li><li>Knockdown - 2 </li><li>Landing </li><li>Dejection </li><li>Throat Slash </li><li>Jab </li><li>Continuous Strikes </li><li>Kick </li><li>Side Kick </li><li>Tai Chi </li><li>Backflip </li><li>Crouching Turn </li><li>Walk - 1 </li><li>Walk - 2 </li><li>Walk - 3 </li><li>Idle - 1 </li><li>Idle - 2 </li><li>Street Dance </li><li>The Twist </li><li>Turn Left </li><li>Turn Right </li><li>Jog </li><li>Jog - 2 </li><li>Run </li><li>Sprint - 1 </li><li>Sprint - 2 </li><li>Sprint - 3 </li><li>Jump (In Place) - 1 </li><li>Sliding Tackle </li><li>Long Jump (Forward) </li><li>Long Jump (Forward) - 2 </li><li>Vault </li><li>Intimidation </li><li>Fall Forward </li><li>Turn Right </li><li>Jump (In Place) - 2 </li><li>Turn Around </li><li>Send Shockwave</li></ol>
                     * 
                     */
                    void SetMotionType(const int64_t& _motionType);

                    /**
                     * 判断参数 MotionType 是否已赋值
                     * @return MotionType 是否已赋值
                     * 
                     */
                    bool MotionTypeHasBeenSet() const;

                private:

                    /**
                     * <p>3D Character Model File: Generates a 3D character animation based on the provided source model.<br>The character model must be in a standard T-Pose (a standing posture with both arms extended horizontally). You must select exactly one of the following 3D model file options; reference specifications:<br>fbx: 3D model file in FBX format; file size must not exceed 60 MB.<br>obj: 3D model file in OBJ format; file size must not exceed 60 MB.</p>
                     */
                    InputFile3D m_file3D;
                    bool m_file3DHasBeenSet;

                    /**
                     * <p>Preset Action Types (Reference Values):</p><ol><li>Roundhouse Kick </li><li>Left Hook </li><li>Charged Attack </li><li>Charged Punch </li><li>Two-Hit Combo </li><li>Two-Hit Combo - 2 </li><li>Backstep </li><li>Hit Reaction </li><li>Hit Reaction - 2 </li><li>Hit Reaction - 3 </li><li>Knockdown - 1 </li><li>Knockdown - 2 </li><li>Landing </li><li>Dejection </li><li>Throat Slash </li><li>Jab </li><li>Continuous Strikes </li><li>Kick </li><li>Side Kick </li><li>Tai Chi </li><li>Backflip </li><li>Crouching Turn </li><li>Walk - 1 </li><li>Walk - 2 </li><li>Walk - 3 </li><li>Idle - 1 </li><li>Idle - 2 </li><li>Street Dance </li><li>The Twist </li><li>Turn Left </li><li>Turn Right </li><li>Jog </li><li>Jog - 2 </li><li>Run </li><li>Sprint - 1 </li><li>Sprint - 2 </li><li>Sprint - 3 </li><li>Jump (In Place) - 1 </li><li>Sliding Tackle </li><li>Long Jump (Forward) </li><li>Long Jump (Forward) - 2 </li><li>Vault </li><li>Intimidation </li><li>Fall Forward </li><li>Turn Right </li><li>Jump (In Place) - 2 </li><li>Turn Around </li><li>Send Shockwave</li></ol>
                     */
                    int64_t m_motionType;
                    bool m_motionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITAUTORIGGINGJOBREQUEST_H_
