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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_RESILIENTSTREAMCONF_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_RESILIENTSTREAMCONF_H_

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
                * 
                */
                class ResilientStreamConf : public AbstractModel
                {
                public:
                    ResilientStreamConf();
                    ~ResilientStreamConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Enable 
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置
                     * @param _enable 
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取
                     * @return BufferTime 
                     * 
                     */
                    uint64_t GetBufferTime() const;

                    /**
                     * 设置
                     * @param _bufferTime 
                     * 
                     */
                    void SetBufferTime(const uint64_t& _bufferTime);

                    /**
                     * 判断参数 BufferTime 是否已赋值
                     * @return BufferTime 是否已赋值
                     * 
                     */
                    bool BufferTimeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_bufferTime;
                    bool m_bufferTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_RESILIENTSTREAMCONF_H_
