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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDRECORDUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDRECORDUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/RecordUsage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Recording duration statistics of a specific application (`SdkAppId`)
                */
                class SdkAppIdRecordUsage : public AbstractModel
                {
                public:
                    SdkAppIdRecordUsage();
                    ~SdkAppIdRecordUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取Durations for the period queried
                     * @return Usages Durations for the period queried
                     */
                    std::vector<RecordUsage> GetUsages() const;

                    /**
                     * 设置Durations for the period queried
                     * @param Usages Durations for the period queried
                     */
                    void SetUsages(const std::vector<RecordUsage>& _usages);

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     */
                    bool UsagesHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Durations for the period queried
                     */
                    std::vector<RecordUsage> m_usages;
                    bool m_usagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDRECORDUSAGE_H_
