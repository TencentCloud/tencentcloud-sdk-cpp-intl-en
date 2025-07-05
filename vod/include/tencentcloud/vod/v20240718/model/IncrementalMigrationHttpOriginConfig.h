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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINCONFIG_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginInfo.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginParameter.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginCondition.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * Configuration of the origin for incremental migration back-to-source.
                */
                class IncrementalMigrationHttpOriginConfig : public AbstractModel
                {
                public:
                    IncrementalMigrationHttpOriginConfig();
                    ~IncrementalMigrationHttpOriginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin information for back-to-source.
                     * @return OriginInfo Origin information for back-to-source.
                     * 
                     */
                    IncrementalMigrationHttpOriginInfo GetOriginInfo() const;

                    /**
                     * 设置Origin information for back-to-source.
                     * @param _originInfo Origin information for back-to-source.
                     * 
                     */
                    void SetOriginInfo(const IncrementalMigrationHttpOriginInfo& _originInfo);

                    /**
                     * 判断参数 OriginInfo 是否已赋值
                     * @return OriginInfo 是否已赋值
                     * 
                     */
                    bool OriginInfoHasBeenSet() const;

                    /**
                     * 获取Back-to-source parameters.
                     * @return OriginParameter Back-to-source parameters.
                     * 
                     */
                    IncrementalMigrationHttpOriginParameter GetOriginParameter() const;

                    /**
                     * 设置Back-to-source parameters.
                     * @param _originParameter Back-to-source parameters.
                     * 
                     */
                    void SetOriginParameter(const IncrementalMigrationHttpOriginParameter& _originParameter);

                    /**
                     * 判断参数 OriginParameter 是否已赋值
                     * @return OriginParameter 是否已赋值
                     * 
                     */
                    bool OriginParameterHasBeenSet() const;

                    /**
                     * 获取Back-to-source mode. Valid values:
<li>SYNC: Synchronous back-to-source;</li>
<li>ASYNC: Asynchronous back-to-source.</li>
                     * @return Mode Back-to-source mode. Valid values:
<li>SYNC: Synchronous back-to-source;</li>
<li>ASYNC: Asynchronous back-to-source.</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Back-to-source mode. Valid values:
<li>SYNC: Synchronous back-to-source;</li>
<li>ASYNC: Asynchronous back-to-source.</li>
                     * @param _mode Back-to-source mode. Valid values:
<li>SYNC: Synchronous back-to-source;</li>
<li>ASYNC: Asynchronous back-to-source.</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Back-to-source conditions.
                     * @return OriginCondition Back-to-source conditions.
                     * 
                     */
                    IncrementalMigrationHttpOriginCondition GetOriginCondition() const;

                    /**
                     * 设置Back-to-source conditions.
                     * @param _originCondition Back-to-source conditions.
                     * 
                     */
                    void SetOriginCondition(const IncrementalMigrationHttpOriginCondition& _originCondition);

                    /**
                     * 判断参数 OriginCondition 是否已赋值
                     * @return OriginCondition 是否已赋值
                     * 
                     */
                    bool OriginConditionHasBeenSet() const;

                private:

                    /**
                     * Origin information for back-to-source.
                     */
                    IncrementalMigrationHttpOriginInfo m_originInfo;
                    bool m_originInfoHasBeenSet;

                    /**
                     * Back-to-source parameters.
                     */
                    IncrementalMigrationHttpOriginParameter m_originParameter;
                    bool m_originParameterHasBeenSet;

                    /**
                     * Back-to-source mode. Valid values:
<li>SYNC: Synchronous back-to-source;</li>
<li>ASYNC: Asynchronous back-to-source.</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Back-to-source conditions.
                     */
                    IncrementalMigrationHttpOriginCondition m_originCondition;
                    bool m_originConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINCONFIG_H_
