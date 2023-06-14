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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTIMERANGE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTIMERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Time range available for rollback
                */
                class RollbackTimeRange : public AbstractModel
                {
                public:
                    RollbackTimeRange();
                    ~RollbackTimeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time available for rollback in the format of yyyy-MM-dd HH:mm:ss, such as 2016-10-29 01:06:04
                     * @return Begin Start time available for rollback in the format of yyyy-MM-dd HH:mm:ss, such as 2016-10-29 01:06:04
                     * 
                     */
                    std::string GetBegin() const;

                    /**
                     * 设置Start time available for rollback in the format of yyyy-MM-dd HH:mm:ss, such as 2016-10-29 01:06:04
                     * @param _begin Start time available for rollback in the format of yyyy-MM-dd HH:mm:ss, such as 2016-10-29 01:06:04
                     * 
                     */
                    void SetBegin(const std::string& _begin);

                    /**
                     * 判断参数 Begin 是否已赋值
                     * @return Begin 是否已赋值
                     * 
                     */
                    bool BeginHasBeenSet() const;

                    /**
                     * 获取End time available for rollback in the format of yyyy-MM-dd HH:mm:ss, such as 2016-11-02 11:44:47
                     * @return End End time available for rollback in the format of yyyy-MM-dd HH:mm:ss, such as 2016-11-02 11:44:47
                     * 
                     */
                    std::string GetEnd() const;

                    /**
                     * 设置End time available for rollback in the format of yyyy-MM-dd HH:mm:ss, such as 2016-11-02 11:44:47
                     * @param _end End time available for rollback in the format of yyyy-MM-dd HH:mm:ss, such as 2016-11-02 11:44:47
                     * 
                     */
                    void SetEnd(const std::string& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * Start time available for rollback in the format of yyyy-MM-dd HH:mm:ss, such as 2016-10-29 01:06:04
                     */
                    std::string m_begin;
                    bool m_beginHasBeenSet;

                    /**
                     * End time available for rollback in the format of yyyy-MM-dd HH:mm:ss, such as 2016-11-02 11:44:47
                     */
                    std::string m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTIMERANGE_H_
