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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_LOGMESSAGEINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_LOGMESSAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/StreamInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Log details.
                */
                class LogMessageInfo : public AbstractModel
                {
                public:
                    LogMessageInfo();
                    ~LogMessageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Push information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StreamInfo Push information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    StreamInfo GetStreamInfo() const;

                    /**
                     * 设置Push information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StreamInfo Push information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStreamInfo(const StreamInfo& _streamInfo);

                    /**
                     * 判断参数 StreamInfo 是否已赋值
                     * @return StreamInfo 是否已赋值
                     */
                    bool StreamInfoHasBeenSet() const;

                private:

                    /**
                     * Push information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    StreamInfo m_streamInfo;
                    bool m_streamInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_LOGMESSAGEINFO_H_
