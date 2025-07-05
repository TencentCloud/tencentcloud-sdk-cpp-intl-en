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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTRTPSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTRTPSETTINGS_H_

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
                * RTP configuration information of the queried input.
                */
                class DescribeInputRTPSettings : public AbstractModel
                {
                public:
                    DescribeInputRTPSettings();
                    ~DescribeInputRTPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it is FEC.
                     * @return FEC Whether it is FEC.
                     * 
                     */
                    std::string GetFEC() const;

                    /**
                     * 设置Whether it is FEC.
                     * @param _fEC Whether it is FEC.
                     * 
                     */
                    void SetFEC(const std::string& _fEC);

                    /**
                     * 判断参数 FEC 是否已赋值
                     * @return FEC 是否已赋值
                     * 
                     */
                    bool FECHasBeenSet() const;

                    /**
                     * 获取Idle timeout period.
                     * @return IdleTimeout Idle timeout period.
                     * 
                     */
                    int64_t GetIdleTimeout() const;

                    /**
                     * 设置Idle timeout period.
                     * @param _idleTimeout Idle timeout period.
                     * 
                     */
                    void SetIdleTimeout(const int64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                private:

                    /**
                     * Whether it is FEC.
                     */
                    std::string m_fEC;
                    bool m_fECHasBeenSet;

                    /**
                     * Idle timeout period.
                     */
                    int64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTRTPSETTINGS_H_
