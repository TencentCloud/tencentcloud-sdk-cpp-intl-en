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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ONESDKAPPIDUSAGESINFO_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ONESDKAPPIDUSAGESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SdkAppIdTrtcUsage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Array of billable audio/video interaction durations of a specific application (`SdkAppId`) and array length
                */
                class OneSdkAppIdUsagesInfo : public AbstractModel
                {
                public:
                    OneSdkAppIdUsagesInfo();
                    ~OneSdkAppIdUsagesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of records returned for the `SdkAppId`
                     * @return TotalNum Number of records returned for the `SdkAppId`
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 设置Number of records returned for the `SdkAppId`
                     * @param TotalNum Number of records returned for the `SdkAppId`
                     */
                    void SetTotalNum(const uint64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取Array of durations
                     * @return SdkAppIdTrtcTimeUsages Array of durations
                     */
                    std::vector<SdkAppIdTrtcUsage> GetSdkAppIdTrtcTimeUsages() const;

                    /**
                     * 设置Array of durations
                     * @param SdkAppIdTrtcTimeUsages Array of durations
                     */
                    void SetSdkAppIdTrtcTimeUsages(const std::vector<SdkAppIdTrtcUsage>& _sdkAppIdTrtcTimeUsages);

                    /**
                     * 判断参数 SdkAppIdTrtcTimeUsages 是否已赋值
                     * @return SdkAppIdTrtcTimeUsages 是否已赋值
                     */
                    bool SdkAppIdTrtcTimeUsagesHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return SdkAppId Application ID
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置Application ID
                     * @param SdkAppId Application ID
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * Number of records returned for the `SdkAppId`
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * Array of durations
                     */
                    std::vector<SdkAppIdTrtcUsage> m_sdkAppIdTrtcTimeUsages;
                    bool m_sdkAppIdTrtcTimeUsagesHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ONESDKAPPIDUSAGESINFO_H_
