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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGAPPCOLLECTPATH_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGAPPCOLLECTPATH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Collection path of application logs.
                */
                class LogAppCollectPath : public AbstractModel
                {
                public:
                    LogAppCollectPath();
                    ~LogAppCollectPath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Configuration ID.</p>
                     * @return Id <p>Configuration ID.</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>Configuration ID.</p>
                     * @param _id <p>Configuration ID.</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Collection path.</p>
                     * @return Path <p>Collection path.</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Collection path.</p>
                     * @param _path <p>Collection path.</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Log tag.</p>
                     * @return LogTag <p>Log tag.</p>
                     * 
                     */
                    std::string GetLogTag() const;

                    /**
                     * 设置<p>Log tag.</p>
                     * @param _logTag <p>Log tag.</p>
                     * 
                     */
                    void SetLogTag(const std::string& _logTag);

                    /**
                     * 判断参数 LogTag 是否已赋值
                     * @return LogTag 是否已赋值
                     * 
                     */
                    bool LogTagHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Modification time.</p>
                     * @return ModifyTime <p>Modification time.</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>Modification time.</p>
                     * @param _modifyTime <p>Modification time.</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Configuration ID.</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Collection path.</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Log tag.</p>
                     */
                    std::string m_logTag;
                    bool m_logTagHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Modification time.</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGAPPCOLLECTPATH_H_
