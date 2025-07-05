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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DASHMANIFESTINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DASHMANIFESTINFO_H_

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
                * The manifest info used when Type is DASH.
                */
                class DashManifestInfo : public AbstractModel
                {
                public:
                    DashManifestInfo();
                    ~DashManifestInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The total duration of each manifest in seconds. [30, 3600], type: integer, default value 60.
                     * @return Windows The total duration of each manifest in seconds. [30, 3600], type: integer, default value 60.
                     * 
                     */
                    int64_t GetWindows() const;

                    /**
                     * 设置The total duration of each manifest in seconds. [30, 3600], type: integer, default value 60.
                     * @param _windows The total duration of each manifest in seconds. [30, 3600], type: integer, default value 60.
                     * 
                     */
                    void SetWindows(const int64_t& _windows);

                    /**
                     * 判断参数 Windows 是否已赋值
                     * @return Windows 是否已赋值
                     * 
                     */
                    bool WindowsHasBeenSet() const;

                    /**
                     * 获取The minimum cache time (in seconds) that the player keeps in the buffer. [2, 60], type: integer, default value 30.
                     * @return MinBufferTime The minimum cache time (in seconds) that the player keeps in the buffer. [2, 60], type: integer, default value 30.
                     * 
                     */
                    int64_t GetMinBufferTime() const;

                    /**
                     * 设置The minimum cache time (in seconds) that the player keeps in the buffer. [2, 60], type: integer, default value 30.
                     * @param _minBufferTime The minimum cache time (in seconds) that the player keeps in the buffer. [2, 60], type: integer, default value 30.
                     * 
                     */
                    void SetMinBufferTime(const int64_t& _minBufferTime);

                    /**
                     * 判断参数 MinBufferTime 是否已赋值
                     * @return MinBufferTime 是否已赋值
                     * 
                     */
                    bool MinBufferTimeHasBeenSet() const;

                    /**
                     * 获取The minimum time (in seconds) that the player should wait before requesting an update to the manifest. [2, 60], type: integer, default value 2.
                     * @return MinUpdatePeriod The minimum time (in seconds) that the player should wait before requesting an update to the manifest. [2, 60], type: integer, default value 2.
                     * 
                     */
                    int64_t GetMinUpdatePeriod() const;

                    /**
                     * 设置The minimum time (in seconds) that the player should wait before requesting an update to the manifest. [2, 60], type: integer, default value 2.
                     * @param _minUpdatePeriod The minimum time (in seconds) that the player should wait before requesting an update to the manifest. [2, 60], type: integer, default value 2.
                     * 
                     */
                    void SetMinUpdatePeriod(const int64_t& _minUpdatePeriod);

                    /**
                     * 判断参数 MinUpdatePeriod 是否已赋值
                     * @return MinUpdatePeriod 是否已赋值
                     * 
                     */
                    bool MinUpdatePeriodHasBeenSet() const;

                    /**
                     * 获取The time from the latest live broadcast time point when the player starts broadcasting is a rollback amount (in seconds). [2, 60], type: integer, default value 10.
                     * @return SuggestedPresentationDelay The time from the latest live broadcast time point when the player starts broadcasting is a rollback amount (in seconds). [2, 60], type: integer, default value 10.
                     * 
                     */
                    int64_t GetSuggestedPresentationDelay() const;

                    /**
                     * 设置The time from the latest live broadcast time point when the player starts broadcasting is a rollback amount (in seconds). [2, 60], type: integer, default value 10.
                     * @param _suggestedPresentationDelay The time from the latest live broadcast time point when the player starts broadcasting is a rollback amount (in seconds). [2, 60], type: integer, default value 10.
                     * 
                     */
                    void SetSuggestedPresentationDelay(const int64_t& _suggestedPresentationDelay);

                    /**
                     * 判断参数 SuggestedPresentationDelay 是否已赋值
                     * @return SuggestedPresentationDelay 是否已赋值
                     * 
                     */
                    bool SuggestedPresentationDelayHasBeenSet() const;

                private:

                    /**
                     * The total duration of each manifest in seconds. [30, 3600], type: integer, default value 60.
                     */
                    int64_t m_windows;
                    bool m_windowsHasBeenSet;

                    /**
                     * The minimum cache time (in seconds) that the player keeps in the buffer. [2, 60], type: integer, default value 30.
                     */
                    int64_t m_minBufferTime;
                    bool m_minBufferTimeHasBeenSet;

                    /**
                     * The minimum time (in seconds) that the player should wait before requesting an update to the manifest. [2, 60], type: integer, default value 2.
                     */
                    int64_t m_minUpdatePeriod;
                    bool m_minUpdatePeriodHasBeenSet;

                    /**
                     * The time from the latest live broadcast time point when the player starts broadcasting is a rollback amount (in seconds). [2, 60], type: integer, default value 10.
                     */
                    int64_t m_suggestedPresentationDelay;
                    bool m_suggestedPresentationDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DASHMANIFESTINFO_H_
