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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ForwardListener.h>
#include <tencentcloud/antiddos/v20200309/model/WaterPrintKey.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Watermark configuration
                */
                class WaterPrintConfig : public AbstractModel
                {
                public:
                    WaterPrintConfig();
                    ~WaterPrintConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermark offset. Value range: [0, 100).
                     * @return Offset Watermark offset. Value range: [0, 100).
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Watermark offset. Value range: [0, 100).
                     * @param Offset Watermark offset. Value range: [0, 100).
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Start status. Valid values:
`0`: manual start
`1`: instant start
]
                     * @return OpenStatus Start status. Valid values:
`0`: manual start
`1`: instant start
]
                     */
                    int64_t GetOpenStatus() const;

                    /**
                     * 设置Start status. Valid values:
`0`: manual start
`1`: instant start
]
                     * @param OpenStatus Start status. Valid values:
`0`: manual start
`1`: instant start
]
                     */
                    void SetOpenStatus(const int64_t& _openStatus);

                    /**
                     * 判断参数 OpenStatus 是否已赋值
                     * @return OpenStatus 是否已赋值
                     */
                    bool OpenStatusHasBeenSet() const;

                    /**
                     * 获取List of forwarding listeners configured
                     * @return Listeners List of forwarding listeners configured
                     */
                    std::vector<ForwardListener> GetListeners() const;

                    /**
                     * 设置List of forwarding listeners configured
                     * @param Listeners List of forwarding listeners configured
                     */
                    void SetListeners(const std::vector<ForwardListener>& _listeners);

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     */
                    bool ListenersHasBeenSet() const;

                    /**
                     * 获取A list of watermark keys is generated after a watermark is added successfully. Each watermark can have up to 2 keys. When there is only one valid key, it cannot be deleted.
                     * @return Keys A list of watermark keys is generated after a watermark is added successfully. Each watermark can have up to 2 keys. When there is only one valid key, it cannot be deleted.
                     */
                    std::vector<WaterPrintKey> GetKeys() const;

                    /**
                     * 设置A list of watermark keys is generated after a watermark is added successfully. Each watermark can have up to 2 keys. When there is only one valid key, it cannot be deleted.
                     * @param Keys A list of watermark keys is generated after a watermark is added successfully. Each watermark can have up to 2 keys. When there is only one valid key, it cannot be deleted.
                     */
                    void SetKeys(const std::vector<WaterPrintKey>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Watermark checking mode, which can be:
`checkall`: normal mode
`shortfpcheckall`: compact mode
]
                     * @return Verify Watermark checking mode, which can be:
`checkall`: normal mode
`shortfpcheckall`: compact mode
]
                     */
                    std::string GetVerify() const;

                    /**
                     * 设置Watermark checking mode, which can be:
`checkall`: normal mode
`shortfpcheckall`: compact mode
]
                     * @param Verify Watermark checking mode, which can be:
`checkall`: normal mode
`shortfpcheckall`: compact mode
]
                     */
                    void SetVerify(const std::string& _verify);

                    /**
                     * 判断参数 Verify 是否已赋值
                     * @return Verify 是否已赋值
                     */
                    bool VerifyHasBeenSet() const;

                    /**
                     * 获取Whether to enable proxy. Values: `1` (Enable proxy and ignore IP+port verification), `0` (Do not enable proxy and IP+port verification is required)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloudSdkProxy Whether to enable proxy. Values: `1` (Enable proxy and ignore IP+port verification), `0` (Do not enable proxy and IP+port verification is required)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCloudSdkProxy() const;

                    /**
                     * 设置Whether to enable proxy. Values: `1` (Enable proxy and ignore IP+port verification), `0` (Do not enable proxy and IP+port verification is required)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CloudSdkProxy Whether to enable proxy. Values: `1` (Enable proxy and ignore IP+port verification), `0` (Do not enable proxy and IP+port verification is required)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCloudSdkProxy(const int64_t& _cloudSdkProxy);

                    /**
                     * 判断参数 CloudSdkProxy 是否已赋值
                     * @return CloudSdkProxy 是否已赋值
                     */
                    bool CloudSdkProxyHasBeenSet() const;

                private:

                    /**
                     * Watermark offset. Value range: [0, 100).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Start status. Valid values:
`0`: manual start
`1`: instant start
]
                     */
                    int64_t m_openStatus;
                    bool m_openStatusHasBeenSet;

                    /**
                     * List of forwarding listeners configured
                     */
                    std::vector<ForwardListener> m_listeners;
                    bool m_listenersHasBeenSet;

                    /**
                     * A list of watermark keys is generated after a watermark is added successfully. Each watermark can have up to 2 keys. When there is only one valid key, it cannot be deleted.
                     */
                    std::vector<WaterPrintKey> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Watermark checking mode, which can be:
`checkall`: normal mode
`shortfpcheckall`: compact mode
]
                     */
                    std::string m_verify;
                    bool m_verifyHasBeenSet;

                    /**
                     * Whether to enable proxy. Values: `1` (Enable proxy and ignore IP+port verification), `0` (Do not enable proxy and IP+port verification is required)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cloudSdkProxy;
                    bool m_cloudSdkProxyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTCONFIG_H_
