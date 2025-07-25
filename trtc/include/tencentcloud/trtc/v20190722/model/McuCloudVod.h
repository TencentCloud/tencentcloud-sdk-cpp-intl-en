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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUCLOUDVOD_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUCLOUDVOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/McuTencentVod.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 
                */
                class McuCloudVod : public AbstractModel
                {
                public:
                    McuCloudVod();
                    ~McuCloudVod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tencent VOD Parameters
Example :{"ExpireTime":86400}
                     * @return McuTencentVod Tencent VOD Parameters
Example :{"ExpireTime":86400}
                     * 
                     */
                    McuTencentVod GetMcuTencentVod() const;

                    /**
                     * 设置Tencent VOD Parameters
Example :{"ExpireTime":86400}
                     * @param _mcuTencentVod Tencent VOD Parameters
Example :{"ExpireTime":86400}
                     * 
                     */
                    void SetMcuTencentVod(const McuTencentVod& _mcuTencentVod);

                    /**
                     * 判断参数 McuTencentVod 是否已赋值
                     * @return McuTencentVod 是否已赋值
                     * 
                     */
                    bool McuTencentVodHasBeenSet() const;

                private:

                    /**
                     * Tencent VOD Parameters
Example :{"ExpireTime":86400}
                     */
                    McuTencentVod m_mcuTencentVod;
                    bool m_mcuTencentVodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUCLOUDVOD_H_
