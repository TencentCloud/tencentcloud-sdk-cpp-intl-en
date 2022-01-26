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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PROTOCOLPARAMS_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PROTOCOLPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/WSParams.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Parameters of the protocol
                */
                class ProtocolParams : public AbstractModel
                {
                public:
                    ProtocolParams();
                    ~ProtocolParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameters of WebSockets protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return WSParams Parameters of WebSockets protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    WSParams GetWSParams() const;

                    /**
                     * 设置Parameters of WebSockets protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param WSParams Parameters of WebSockets protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetWSParams(const WSParams& _wSParams);

                    /**
                     * 判断参数 WSParams 是否已赋值
                     * @return WSParams 是否已赋值
                     */
                    bool WSParamsHasBeenSet() const;

                private:

                    /**
                     * Parameters of WebSockets protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    WSParams m_wSParams;
                    bool m_wSParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PROTOCOLPARAMS_H_
