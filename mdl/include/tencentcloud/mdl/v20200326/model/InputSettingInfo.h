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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSETTINGINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSETTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Input settings information.
                */
                class InputSettingInfo : public AbstractModel
                {
                public:
                    InputSettingInfo();
                    ~InputSettingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application name, which is used for RTMP_PUSH and can contain 1–32 letters and digits.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AppName Application name, which is used for RTMP_PUSH and can contain 1–32 letters and digits.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Application name, which is used for RTMP_PUSH and can contain 1–32 letters and digits.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AppName Application name, which is used for RTMP_PUSH and can contain 1–32 letters and digits.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Stream name, which is used for RTMP_PUSH and can contain 1–32 letters and digits.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StreamName Stream name, which is used for RTMP_PUSH and can contain 1–32 letters and digits.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name, which is used for RTMP_PUSH and can contain 1–32 letters and digits.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StreamName Stream name, which is used for RTMP_PUSH and can contain 1–32 letters and digits.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Origin-pull URL, which is used for RTMP_PULL/HLS_PULL/MP4_PULL. Length limit: [1,512].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SourceUrl Origin-pull URL, which is used for RTMP_PULL/HLS_PULL/MP4_PULL. Length limit: [1,512].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSourceUrl() const;

                    /**
                     * 设置Origin-pull URL, which is used for RTMP_PULL/HLS_PULL/MP4_PULL. Length limit: [1,512].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SourceUrl Origin-pull URL, which is used for RTMP_PULL/HLS_PULL/MP4_PULL. Length limit: [1,512].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSourceUrl(const std::string& _sourceUrl);

                    /**
                     * 判断参数 SourceUrl 是否已赋值
                     * @return SourceUrl 是否已赋值
                     */
                    bool SourceUrlHasBeenSet() const;

                    /**
                     * 获取RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InputAddress RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInputAddress() const;

                    /**
                     * 设置RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InputAddress RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInputAddress(const std::string& _inputAddress);

                    /**
                     * 判断参数 InputAddress 是否已赋值
                     * @return InputAddress 是否已赋值
                     */
                    bool InputAddressHasBeenSet() const;

                private:

                    /**
                     * Application name, which is used for RTMP_PUSH and can contain 1–32 letters and digits.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Stream name, which is used for RTMP_PUSH and can contain 1–32 letters and digits.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Origin-pull URL, which is used for RTMP_PULL/HLS_PULL/MP4_PULL. Length limit: [1,512].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceUrl;
                    bool m_sourceUrlHasBeenSet;

                    /**
                     * RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_inputAddress;
                    bool m_inputAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSETTINGINFO_H_
