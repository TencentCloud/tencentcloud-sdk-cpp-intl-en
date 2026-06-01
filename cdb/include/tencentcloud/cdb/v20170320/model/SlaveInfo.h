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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SLAVEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SLAVEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/SlaveInstanceInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Slave server information
                */
                class SlaveInfo : public AbstractModel
                {
                public:
                    SlaveInfo();
                    ~SlaveInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Secondary server information of the top spot</p>
                     * @return First <p>Secondary server information of the top spot</p>
                     * 
                     */
                    SlaveInstanceInfo GetFirst() const;

                    /**
                     * 设置<p>Secondary server information of the top spot</p>
                     * @param _first <p>Secondary server information of the top spot</p>
                     * 
                     */
                    void SetFirst(const SlaveInstanceInfo& _first);

                    /**
                     * 判断参数 First 是否已赋值
                     * @return First 是否已赋值
                     * 
                     */
                    bool FirstHasBeenSet() const;

                    /**
                     * 获取<p>Second standby machine information</p>
                     * @return Second <p>Second standby machine information</p>
                     * 
                     */
                    SlaveInstanceInfo GetSecond() const;

                    /**
                     * 设置<p>Second standby machine information</p>
                     * @param _second <p>Second standby machine information</p>
                     * 
                     */
                    void SetSecond(const SlaveInstanceInfo& _second);

                    /**
                     * 判断参数 Second 是否已赋值
                     * @return Second 是否已赋值
                     * 
                     */
                    bool SecondHasBeenSet() const;

                private:

                    /**
                     * <p>Secondary server information of the top spot</p>
                     */
                    SlaveInstanceInfo m_first;
                    bool m_firstHasBeenSet;

                    /**
                     * <p>Second standby machine information</p>
                     */
                    SlaveInstanceInfo m_second;
                    bool m_secondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SLAVEINFO_H_
