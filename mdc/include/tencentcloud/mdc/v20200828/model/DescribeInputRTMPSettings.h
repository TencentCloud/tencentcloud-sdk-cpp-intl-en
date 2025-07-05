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
                * RTMP configuration information of the queried input
                */
                class DescribeInputRTMPSettings : public AbstractModel
                {
                public:
                    DescribeInputRTMPSettings();
                    ~DescribeInputRTMPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Path for RTMP stream pushing
Note: this field may return `null`, indicating that no valid value was found.
                     * @return AppName Path for RTMP stream pushing
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Path for RTMP stream pushing
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _appName Path for RTMP stream pushing
Note: this field may return `null`, indicating that no valid value was found.
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
                     * 获取StreamKey for RTMP stream pushing
Format of an RTMP stream pushing URL: rtmp://IP address:1935/AppName/StreamKey
                     * @return StreamKey StreamKey for RTMP stream pushing
Format of an RTMP stream pushing URL: rtmp://IP address:1935/AppName/StreamKey
                     * 
                     */
                    std::string GetStreamKey() const;

                    /**
                     * 设置StreamKey for RTMP stream pushing
Format of an RTMP stream pushing URL: rtmp://IP address:1935/AppName/StreamKey
                     * @param _streamKey StreamKey for RTMP stream pushing
Format of an RTMP stream pushing URL: rtmp://IP address:1935/AppName/StreamKey
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
                     * Path for RTMP stream pushing
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * StreamKey for RTMP stream pushing
Format of an RTMP stream pushing URL: rtmp://IP address:1935/AppName/StreamKey
                     */
                    std::string m_streamKey;
                    bool m_streamKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTRTMPSETTINGS_H_
