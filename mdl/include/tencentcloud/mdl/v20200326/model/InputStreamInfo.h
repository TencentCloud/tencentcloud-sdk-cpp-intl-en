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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSTREAMINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSTREAMINFO_H_

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
                * The input stream information.
                */
                class InputStreamInfo : public AbstractModel
                {
                public:
                    InputStreamInfo();
                    ~InputStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The input stream address.
                     * @return InputAddress The input stream address.
                     */
                    std::string GetInputAddress() const;

                    /**
                     * 设置The input stream address.
                     * @param InputAddress The input stream address.
                     */
                    void SetInputAddress(const std::string& _inputAddress);

                    /**
                     * 判断参数 InputAddress 是否已赋值
                     * @return InputAddress 是否已赋值
                     */
                    bool InputAddressHasBeenSet() const;

                    /**
                     * 获取The input stream path.
                     * @return AppName The input stream path.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The input stream path.
                     * @param AppName The input stream path.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取The input stream name.
                     * @return StreamName The input stream name.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The input stream name.
                     * @param StreamName The input stream name.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The input stream status. `1` indicates the stream is active.
                     * @return Status The input stream status. `1` indicates the stream is active.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置The input stream status. `1` indicates the stream is active.
                     * @param Status The input stream status. `1` indicates the stream is active.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * The input stream address.
                     */
                    std::string m_inputAddress;
                    bool m_inputAddressHasBeenSet;

                    /**
                     * The input stream path.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The input stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The input stream status. `1` indicates the stream is active.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSTREAMINFO_H_
