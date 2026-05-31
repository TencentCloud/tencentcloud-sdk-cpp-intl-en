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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXCHANGEROGROUPINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXCHANGEROGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackRoGroupInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 
                */
                class ExchangeRoGroupInfo : public AbstractModel
                {
                public:
                    ExchangeRoGroupInfo();
                    ~ExchangeRoGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source RO group information.
                     * @return SrcRoGroupInfo Source RO group information.
                     * 
                     */
                    RollbackRoGroupInfo GetSrcRoGroupInfo() const;

                    /**
                     * 设置Source RO group information.
                     * @param _srcRoGroupInfo Source RO group information.
                     * 
                     */
                    void SetSrcRoGroupInfo(const RollbackRoGroupInfo& _srcRoGroupInfo);

                    /**
                     * 判断参数 SrcRoGroupInfo 是否已赋值
                     * @return SrcRoGroupInfo 是否已赋值
                     * 
                     */
                    bool SrcRoGroupInfoHasBeenSet() const;

                    /**
                     * 获取Target RO group information.
                     * @return DstRoGroupInfo Target RO group information.
                     * 
                     */
                    RollbackRoGroupInfo GetDstRoGroupInfo() const;

                    /**
                     * 设置Target RO group information.
                     * @param _dstRoGroupInfo Target RO group information.
                     * 
                     */
                    void SetDstRoGroupInfo(const RollbackRoGroupInfo& _dstRoGroupInfo);

                    /**
                     * 判断参数 DstRoGroupInfo 是否已赋值
                     * @return DstRoGroupInfo 是否已赋值
                     * 
                     */
                    bool DstRoGroupInfoHasBeenSet() const;

                private:

                    /**
                     * Source RO group information.
                     */
                    RollbackRoGroupInfo m_srcRoGroupInfo;
                    bool m_srcRoGroupInfoHasBeenSet;

                    /**
                     * Target RO group information.
                     */
                    RollbackRoGroupInfo m_dstRoGroupInfo;
                    bool m_dstRoGroupInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXCHANGEROGROUPINFO_H_
