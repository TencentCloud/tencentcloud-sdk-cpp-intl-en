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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_ENCODEDSTARTCMDINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_ENCODEDSTARTCMDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Encoded startup command information.
                */
                class EncodedStartCmdInfo : public AbstractModel
                {
                public:
                    EncodedStartCmdInfo();
                    ~EncodedStartCmdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Startup command of the task, which is input in base64 format. Note that the complete input of {"StartCmd":"","PsStartCmd":"","WorkerStartCmd":""} is required for conversion.
                     * @return StartCmdInfo Startup command of the task, which is input in base64 format. Note that the complete input of {"StartCmd":"","PsStartCmd":"","WorkerStartCmd":""} is required for conversion.
                     * 
                     */
                    std::string GetStartCmdInfo() const;

                    /**
                     * 设置Startup command of the task, which is input in base64 format. Note that the complete input of {"StartCmd":"","PsStartCmd":"","WorkerStartCmd":""} is required for conversion.
                     * @param _startCmdInfo Startup command of the task, which is input in base64 format. Note that the complete input of {"StartCmd":"","PsStartCmd":"","WorkerStartCmd":""} is required for conversion.
                     * 
                     */
                    void SetStartCmdInfo(const std::string& _startCmdInfo);

                    /**
                     * 判断参数 StartCmdInfo 是否已赋值
                     * @return StartCmdInfo 是否已赋值
                     * 
                     */
                    bool StartCmdInfoHasBeenSet() const;

                private:

                    /**
                     * Startup command of the task, which is input in base64 format. Note that the complete input of {"StartCmd":"","PsStartCmd":"","WorkerStartCmd":""} is required for conversion.
                     */
                    std::string m_startCmdInfo;
                    bool m_startCmdInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_ENCODEDSTARTCMDINFO_H_
