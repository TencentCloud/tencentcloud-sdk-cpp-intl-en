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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTRTMPSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTRTMPSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Query the input RTMP configuration message.
                */
                class DescribeInputRTMPSettings : public AbstractModel
                {
                public:
                    DescribeInputRTMPSettings();
                    ~DescribeInputRTMPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RTMP push path.
                     * @return AppName RTMP push path.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置RTMP push path.
                     * @param _appName RTMP push path.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取RTMP push StreamKey.
RTMP push URL splicing rule: rtmp://Ip:1935/AppName/StreamKey
                     * @return StreamKey RTMP push StreamKey.
RTMP push URL splicing rule: rtmp://Ip:1935/AppName/StreamKey
                     * 
                     */
                    std::string GetStreamKey() const;

                    /**
                     * 设置RTMP push StreamKey.
RTMP push URL splicing rule: rtmp://Ip:1935/AppName/StreamKey
                     * @param _streamKey RTMP push StreamKey.
RTMP push URL splicing rule: rtmp://Ip:1935/AppName/StreamKey
                     * 
                     */
                    void SetStreamKey(const std::string& _streamKey);

                    /**
                     * 判断参数 StreamKey 是否已赋值
                     * @return StreamKey 是否已赋值
                     * 
                     */
                    bool StreamKeyHasBeenSet() const;

                private:

                    /**
                     * RTMP push path.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * RTMP push StreamKey.
RTMP push URL splicing rule: rtmp://Ip:1935/AppName/StreamKey
                     */
                    std::string m_streamKey;
                    bool m_streamKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTRTMPSETTINGS_H_
