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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESTREAMDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESTREAMDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Returned data of the streaming address.
                */
                class ControlDeviceStreamData : public AbstractModel
                {
                public:
                    ControlDeviceStreamData();
                    ~ControlDeviceStreamData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取flv stream address.
                     * @return Flv flv stream address.
                     * 
                     */
                    std::string GetFlv() const;

                    /**
                     * 设置flv stream address.
                     * @param _flv flv stream address.
                     * 
                     */
                    void SetFlv(const std::string& _flv);

                    /**
                     * 判断参数 Flv 是否已赋值
                     * @return Flv 是否已赋值
                     * 
                     */
                    bool FlvHasBeenSet() const;

                    /**
                     * 获取hls stream address.
                     * @return Hls hls stream address.
                     * 
                     */
                    std::string GetHls() const;

                    /**
                     * 设置hls stream address.
                     * @param _hls hls stream address.
                     * 
                     */
                    void SetHls(const std::string& _hls);

                    /**
                     * 判断参数 Hls 是否已赋值
                     * @return Hls 是否已赋值
                     * 
                     */
                    bool HlsHasBeenSet() const;

                    /**
                     * 获取rtmp stream address.
                     * @return Rtmp rtmp stream address.
                     * 
                     */
                    std::string GetRtmp() const;

                    /**
                     * 设置rtmp stream address.
                     * @param _rtmp rtmp stream address.
                     * 
                     */
                    void SetRtmp(const std::string& _rtmp);

                    /**
                     * 判断参数 Rtmp 是否已赋值
                     * @return Rtmp 是否已赋值
                     * 
                     */
                    bool RtmpHasBeenSet() const;

                private:

                    /**
                     * flv stream address.
                     */
                    std::string m_flv;
                    bool m_flvHasBeenSet;

                    /**
                     * hls stream address.
                     */
                    std::string m_hls;
                    bool m_hlsHasBeenSet;

                    /**
                     * rtmp stream address.
                     */
                    std::string m_rtmp;
                    bool m_rtmpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESTREAMDATA_H_
