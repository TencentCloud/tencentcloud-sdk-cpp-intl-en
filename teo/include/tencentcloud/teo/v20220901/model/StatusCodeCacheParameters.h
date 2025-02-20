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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_STATUSCODECACHEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_STATUSCODECACHEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/StatusCodeCacheParam.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Status Code Cache TTL configuration parameters.
                */
                class StatusCodeCacheParameters : public AbstractModel
                {
                public:
                    StatusCodeCacheParameters();
                    ~StatusCodeCacheParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status code cache ttl.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return StatusCodeCacheParams Status code cache ttl.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::vector<StatusCodeCacheParam> GetStatusCodeCacheParams() const;

                    /**
                     * 设置Status code cache ttl.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _statusCodeCacheParams Status code cache ttl.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetStatusCodeCacheParams(const std::vector<StatusCodeCacheParam>& _statusCodeCacheParams);

                    /**
                     * 判断参数 StatusCodeCacheParams 是否已赋值
                     * @return StatusCodeCacheParams 是否已赋值
                     * 
                     */
                    bool StatusCodeCacheParamsHasBeenSet() const;

                private:

                    /**
                     * Status code cache ttl.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::vector<StatusCodeCacheParam> m_statusCodeCacheParams;
                    bool m_statusCodeCacheParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_STATUSCODECACHEPARAMETERS_H_
