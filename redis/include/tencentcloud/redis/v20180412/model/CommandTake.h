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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_COMMANDTAKE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_COMMANDTAKE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Command duration
                */
                class CommandTake : public AbstractModel
                {
                public:
                    CommandTake();
                    ~CommandTake() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Command name.
                     * @return Cmd Command name.
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置Command name.
                     * @param _cmd Command name.
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取Time consumed. Unit: ms.
                     * @return Took Time consumed. Unit: ms.
                     * 
                     */
                    int64_t GetTook() const;

                    /**
                     * 设置Time consumed. Unit: ms.
                     * @param _took Time consumed. Unit: ms.
                     * 
                     */
                    void SetTook(const int64_t& _took);

                    /**
                     * 判断参数 Took 是否已赋值
                     * @return Took 是否已赋值
                     * 
                     */
                    bool TookHasBeenSet() const;

                private:

                    /**
                     * Command name.
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * Time consumed. Unit: ms.
                     */
                    int64_t m_took;
                    bool m_tookHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_COMMANDTAKE_H_
