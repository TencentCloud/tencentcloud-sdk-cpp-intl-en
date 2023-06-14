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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_HEADPOSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_HEADPOSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Pose information.
                */
                class HeadPose : public AbstractModel
                {
                public:
                    HeadPose();
                    ~HeadPose() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pitch. Value range: [-30,30].
                     * @return Pitch Pitch. Value range: [-30,30].
                     * 
                     */
                    int64_t GetPitch() const;

                    /**
                     * 设置Pitch. Value range: [-30,30].
                     * @param _pitch Pitch. Value range: [-30,30].
                     * 
                     */
                    void SetPitch(const int64_t& _pitch);

                    /**
                     * 判断参数 Pitch 是否已赋值
                     * @return Pitch 是否已赋值
                     * 
                     */
                    bool PitchHasBeenSet() const;

                    /**
                     * 获取Yaw. Value range: [-30,30].
                     * @return Yaw Yaw. Value range: [-30,30].
                     * 
                     */
                    int64_t GetYaw() const;

                    /**
                     * 设置Yaw. Value range: [-30,30].
                     * @param _yaw Yaw. Value range: [-30,30].
                     * 
                     */
                    void SetYaw(const int64_t& _yaw);

                    /**
                     * 判断参数 Yaw 是否已赋值
                     * @return Yaw 是否已赋值
                     * 
                     */
                    bool YawHasBeenSet() const;

                    /**
                     * 获取Roll. Value range: [-180,180].
                     * @return Roll Roll. Value range: [-180,180].
                     * 
                     */
                    int64_t GetRoll() const;

                    /**
                     * 设置Roll. Value range: [-180,180].
                     * @param _roll Roll. Value range: [-180,180].
                     * 
                     */
                    void SetRoll(const int64_t& _roll);

                    /**
                     * 判断参数 Roll 是否已赋值
                     * @return Roll 是否已赋值
                     * 
                     */
                    bool RollHasBeenSet() const;

                private:

                    /**
                     * Pitch. Value range: [-30,30].
                     */
                    int64_t m_pitch;
                    bool m_pitchHasBeenSet;

                    /**
                     * Yaw. Value range: [-30,30].
                     */
                    int64_t m_yaw;
                    bool m_yawHasBeenSet;

                    /**
                     * Roll. Value range: [-180,180].
                     */
                    int64_t m_roll;
                    bool m_rollHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_HEADPOSE_H_
