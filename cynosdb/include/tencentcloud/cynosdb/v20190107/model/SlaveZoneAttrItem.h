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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLAVEZONEATTRITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLAVEZONEATTRITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class SlaveZoneAttrItem : public AbstractModel
                {
                public:
                    SlaveZoneAttrItem();
                    ~SlaveZoneAttrItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Zone 
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置
                     * @param _zone 
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取
                     * @return BinlogSyncWay 
                     * 
                     */
                    std::string GetBinlogSyncWay() const;

                    /**
                     * 设置
                     * @param _binlogSyncWay 
                     * 
                     */
                    void SetBinlogSyncWay(const std::string& _binlogSyncWay);

                    /**
                     * 判断参数 BinlogSyncWay 是否已赋值
                     * @return BinlogSyncWay 是否已赋值
                     * 
                     */
                    bool BinlogSyncWayHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_binlogSyncWay;
                    bool m_binlogSyncWayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLAVEZONEATTRITEM_H_
