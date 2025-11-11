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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYGROUPOFFSETSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYGROUPOFFSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyGroupOffsets request structure.
                */
                class ModifyGroupOffsetsRequest : public AbstractModel
                {
                public:
                    ModifyGroupOffsetsRequest();
                    ~ModifyGroupOffsetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * @return InstanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * @param _instanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Consumer group name. obtain through the API [DescribeConsumerGroup](https://www.tencentcloud.comom/document/product/597/40841?from_cn_redirect=1).
                     * @return Group Consumer group name. obtain through the API [DescribeConsumerGroup](https://www.tencentcloud.comom/document/product/597/40841?from_cn_redirect=1).
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置Consumer group name. obtain through the API [DescribeConsumerGroup](https://www.tencentcloud.comom/document/product/597/40841?from_cn_redirect=1).
                     * @param _group Consumer group name. obtain through the API [DescribeConsumerGroup](https://www.tencentcloud.comom/document/product/597/40841?from_cn_redirect=1).
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取Reset offset strategy. parameter meaning: 0. align with the shift-by parameter, move the offset forward or backward by shift entries. 1. alignment reference (by-duration, to-datetime, to-earliest, to-latest), move the offset to the specified timestamp position. 2. alignment reference (to-offset), move the offset to the specified offset position.
                     * @return Strategy Reset offset strategy. parameter meaning: 0. align with the shift-by parameter, move the offset forward or backward by shift entries. 1. alignment reference (by-duration, to-datetime, to-earliest, to-latest), move the offset to the specified timestamp position. 2. alignment reference (to-offset), move the offset to the specified offset position.
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置Reset offset strategy. parameter meaning: 0. align with the shift-by parameter, move the offset forward or backward by shift entries. 1. alignment reference (by-duration, to-datetime, to-earliest, to-latest), move the offset to the specified timestamp position. 2. alignment reference (to-offset), move the offset to the specified offset position.
                     * @param _strategy Reset offset strategy. parameter meaning: 0. align with the shift-by parameter, move the offset forward or backward by shift entries. 1. alignment reference (by-duration, to-datetime, to-earliest, to-latest), move the offset to the specified timestamp position. 2. alignment reference (to-offset), move the offset to the specified offset position.
                     * 
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Specifies the topic name list that needs to reset.
                     * @return Topics Specifies the topic name list that needs to reset.
                     * 
                     */
                    std::vector<std::string> GetTopics() const;

                    /**
                     * 设置Specifies the topic name list that needs to reset.
                     * @param _topics Specifies the topic name list that needs to reset.
                     * 
                     */
                    void SetTopics(const std::vector<std::string>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取When `strategy` is 0, this field is required. If it is above zero, the offset will be shifted backward by the value of the `shift`. If it is below zero, the offset will be shifted forward by the value of the `shift`. After a correct reset, the new offset should be (old_offset + shift). Note that if the new offset is smaller than the `earliest` parameter of the partition, it will be set to `earliest`, and if it is greater than the `latest` parameter of the partition, it will be set to `latest`
                     * @return Shift When `strategy` is 0, this field is required. If it is above zero, the offset will be shifted backward by the value of the `shift`. If it is below zero, the offset will be shifted forward by the value of the `shift`. After a correct reset, the new offset should be (old_offset + shift). Note that if the new offset is smaller than the `earliest` parameter of the partition, it will be set to `earliest`, and if it is greater than the `latest` parameter of the partition, it will be set to `latest`
                     * 
                     */
                    int64_t GetShift() const;

                    /**
                     * 设置When `strategy` is 0, this field is required. If it is above zero, the offset will be shifted backward by the value of the `shift`. If it is below zero, the offset will be shifted forward by the value of the `shift`. After a correct reset, the new offset should be (old_offset + shift). Note that if the new offset is smaller than the `earliest` parameter of the partition, it will be set to `earliest`, and if it is greater than the `latest` parameter of the partition, it will be set to `latest`
                     * @param _shift When `strategy` is 0, this field is required. If it is above zero, the offset will be shifted backward by the value of the `shift`. If it is below zero, the offset will be shifted forward by the value of the `shift`. After a correct reset, the new offset should be (old_offset + shift). Note that if the new offset is smaller than the `earliest` parameter of the partition, it will be set to `earliest`, and if it is greater than the `latest` parameter of the partition, it will be set to `latest`
                     * 
                     */
                    void SetShift(const int64_t& _shift);

                    /**
                     * 判断参数 Shift 是否已赋值
                     * @return Shift 是否已赋值
                     * 
                     */
                    bool ShiftHasBeenSet() const;

                    /**
                     * 获取In milliseconds. when strategy is 1, must include this field. among them, -2 means reset offset to the start position, -1 means reset to the latest position (equivalent to clearing), other values represent the specified time. obtain the offset at the specified time in the topic and reset. notably, if no message exists at the specified time, get the last offset.
                     * @return ShiftTimestamp In milliseconds. when strategy is 1, must include this field. among them, -2 means reset offset to the start position, -1 means reset to the latest position (equivalent to clearing), other values represent the specified time. obtain the offset at the specified time in the topic and reset. notably, if no message exists at the specified time, get the last offset.
                     * 
                     */
                    int64_t GetShiftTimestamp() const;

                    /**
                     * 设置In milliseconds. when strategy is 1, must include this field. among them, -2 means reset offset to the start position, -1 means reset to the latest position (equivalent to clearing), other values represent the specified time. obtain the offset at the specified time in the topic and reset. notably, if no message exists at the specified time, get the last offset.
                     * @param _shiftTimestamp In milliseconds. when strategy is 1, must include this field. among them, -2 means reset offset to the start position, -1 means reset to the latest position (equivalent to clearing), other values represent the specified time. obtain the offset at the specified time in the topic and reset. notably, if no message exists at the specified time, get the last offset.
                     * 
                     */
                    void SetShiftTimestamp(const int64_t& _shiftTimestamp);

                    /**
                     * 判断参数 ShiftTimestamp 是否已赋值
                     * @return ShiftTimestamp 是否已赋值
                     * 
                     */
                    bool ShiftTimestampHasBeenSet() const;

                    /**
                     * 获取Position of the offset that needs to be reset. When `strategy` is 2, this field is required
                     * @return Offset Position of the offset that needs to be reset. When `strategy` is 2, this field is required
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Position of the offset that needs to be reset. When `strategy` is 2, this field is required
                     * @param _offset Position of the offset that needs to be reset. When `strategy` is 2, this field is required
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取List of partitions that need to be reset. If the topics parameter is not specified, reset partitions in the corresponding partition list of all topics. If the topics parameter is specified, reset partitions of the corresponding partition list of the specified topic list.
                     * @return Partitions List of partitions that need to be reset. If the topics parameter is not specified, reset partitions in the corresponding partition list of all topics. If the topics parameter is specified, reset partitions of the corresponding partition list of the specified topic list.
                     * 
                     */
                    std::vector<int64_t> GetPartitions() const;

                    /**
                     * 设置List of partitions that need to be reset. If the topics parameter is not specified, reset partitions in the corresponding partition list of all topics. If the topics parameter is specified, reset partitions of the corresponding partition list of the specified topic list.
                     * @param _partitions List of partitions that need to be reset. If the topics parameter is not specified, reset partitions in the corresponding partition list of all topics. If the topics parameter is specified, reset partitions of the corresponding partition list of the specified topic list.
                     * 
                     */
                    void SetPartitions(const std::vector<int64_t>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                private:

                    /**
                     * ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Consumer group name. obtain through the API [DescribeConsumerGroup](https://www.tencentcloud.comom/document/product/597/40841?from_cn_redirect=1).
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Reset offset strategy. parameter meaning: 0. align with the shift-by parameter, move the offset forward or backward by shift entries. 1. alignment reference (by-duration, to-datetime, to-earliest, to-latest), move the offset to the specified timestamp position. 2. alignment reference (to-offset), move the offset to the specified offset position.
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Specifies the topic name list that needs to reset.
                     */
                    std::vector<std::string> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * When `strategy` is 0, this field is required. If it is above zero, the offset will be shifted backward by the value of the `shift`. If it is below zero, the offset will be shifted forward by the value of the `shift`. After a correct reset, the new offset should be (old_offset + shift). Note that if the new offset is smaller than the `earliest` parameter of the partition, it will be set to `earliest`, and if it is greater than the `latest` parameter of the partition, it will be set to `latest`
                     */
                    int64_t m_shift;
                    bool m_shiftHasBeenSet;

                    /**
                     * In milliseconds. when strategy is 1, must include this field. among them, -2 means reset offset to the start position, -1 means reset to the latest position (equivalent to clearing), other values represent the specified time. obtain the offset at the specified time in the topic and reset. notably, if no message exists at the specified time, get the last offset.
                     */
                    int64_t m_shiftTimestamp;
                    bool m_shiftTimestampHasBeenSet;

                    /**
                     * Position of the offset that needs to be reset. When `strategy` is 2, this field is required
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * List of partitions that need to be reset. If the topics parameter is not specified, reset partitions in the corresponding partition list of all topics. If the topics parameter is specified, reset partitions of the corresponding partition list of the specified topic list.
                     */
                    std::vector<int64_t> m_partitions;
                    bool m_partitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYGROUPOFFSETSREQUEST_H_
