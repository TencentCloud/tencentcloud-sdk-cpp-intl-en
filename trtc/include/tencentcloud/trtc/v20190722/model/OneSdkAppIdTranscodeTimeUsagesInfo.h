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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ONESDKAPPIDTRANSCODETIMEUSAGESINFO_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ONESDKAPPIDTRANSCODETIMEUSAGESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SdkAppIdTrtcMcuTranscodeTimeUsage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Relaying and transcoding duration statistics
                */
                class OneSdkAppIdTranscodeTimeUsagesInfo : public AbstractModel
                {
                public:
                    OneSdkAppIdTranscodeTimeUsagesInfo();
                    ~OneSdkAppIdTranscodeTimeUsagesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Array of relaying and transcoding durations
                     * @return SdkAppIdTranscodeTimeUsages Array of relaying and transcoding durations
                     */
                    std::vector<SdkAppIdTrtcMcuTranscodeTimeUsage> GetSdkAppIdTranscodeTimeUsages() const;

                    /**
                     * 设置Array of relaying and transcoding durations
                     * @param SdkAppIdTranscodeTimeUsages Array of relaying and transcoding durations
                     */
                    void SetSdkAppIdTranscodeTimeUsages(const std::vector<SdkAppIdTrtcMcuTranscodeTimeUsage>& _sdkAppIdTranscodeTimeUsages);

                    /**
                     * 判断参数 SdkAppIdTranscodeTimeUsages 是否已赋值
                     * @return SdkAppIdTranscodeTimeUsages 是否已赋值
                     */
                    bool SdkAppIdTranscodeTimeUsagesHasBeenSet() const;

                    /**
                     * 获取Number of records returned
                     * @return TotalNum Number of records returned
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 设置Number of records returned
                     * @param TotalNum Number of records returned
                     */
                    void SetTotalNum(const uint64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取ID of the application queried. Its value may be an application ID or `total`, which indicates that the total durations of all applications are queried.
                     * @return SdkAppId ID of the application queried. Its value may be an application ID or `total`, which indicates that the total durations of all applications are queried.
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置ID of the application queried. Its value may be an application ID or `total`, which indicates that the total durations of all applications are queried.
                     * @param SdkAppId ID of the application queried. Its value may be an application ID or `total`, which indicates that the total durations of all applications are queried.
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * Array of relaying and transcoding durations
                     */
                    std::vector<SdkAppIdTrtcMcuTranscodeTimeUsage> m_sdkAppIdTranscodeTimeUsages;
                    bool m_sdkAppIdTranscodeTimeUsagesHasBeenSet;

                    /**
                     * Number of records returned
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * ID of the application queried. Its value may be an application ID or `total`, which indicates that the total durations of all applications are queried.
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ONESDKAPPIDTRANSCODETIMEUSAGESINFO_H_
