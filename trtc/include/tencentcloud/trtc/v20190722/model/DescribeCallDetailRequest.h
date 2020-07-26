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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCallDetail request structure.
                */
                class DescribeCallDetailRequest : public AbstractModel
                {
                public:
                    DescribeCallDetailRequest();
                    ~DescribeCallDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Call ID (unique call ID): sdkappid_roomgString (room ID)_createTime (room creation time in UNIX timestamp in seconds). You can get the parameter value through the `DescribeRoomInformation` API which is used to query the room list.
                     * @return CommId Call ID (unique call ID): sdkappid_roomgString (room ID)_createTime (room creation time in UNIX timestamp in seconds). You can get the parameter value through the `DescribeRoomInformation` API which is used to query the room list.
                     */
                    std::string GetCommId() const;

                    /**
                     * 设置Call ID (unique call ID): sdkappid_roomgString (room ID)_createTime (room creation time in UNIX timestamp in seconds). You can get the parameter value through the `DescribeRoomInformation` API which is used to query the room list.
                     * @param CommId Call ID (unique call ID): sdkappid_roomgString (room ID)_createTime (room creation time in UNIX timestamp in seconds). You can get the parameter value through the `DescribeRoomInformation` API which is used to query the room list.
                     */
                    void SetCommId(const std::string& _commId);

                    /**
                     * 判断参数 CommId 是否已赋值
                     * @return CommId 是否已赋值
                     */
                    bool CommIdHasBeenSet() const;

                    /**
                     * 获取Query start time in the format of local UNIX timestamp, such as 1588031999s, which is a point in time in the last 5 days.
                     * @return StartTime Query start time in the format of local UNIX timestamp, such as 1588031999s, which is a point in time in the last 5 days.
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Query start time in the format of local UNIX timestamp, such as 1588031999s, which is a point in time in the last 5 days.
                     * @param StartTime Query start time in the format of local UNIX timestamp, such as 1588031999s, which is a point in time in the last 5 days.
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time in the format of local UNIX timestamp, such as 1588031999s.
                     * @return EndTime Query end time in the format of local UNIX timestamp, such as 1588031999s.
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Query end time in the format of local UNIX timestamp, such as 1588031999s.
                     * @param EndTime Query end time in the format of local UNIX timestamp, such as 1588031999s.
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取User `sdkappid`
                     * @return SdkAppId User `sdkappid`
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置User `sdkappid`
                     * @param SdkAppId User `sdkappid`
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取User array to query, which contains up to 6 users. If it is left empty, 6 users will be returned by default.
                     * @return UserIds User array to query, which contains up to 6 users. If it is left empty, 6 users will be returned by default.
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置User array to query, which contains up to 6 users. If it is left empty, 6 users will be returned by default.
                     * @param UserIds User array to query, which contains up to 6 users. If it is left empty, 6 users will be returned by default.
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取Metric to query. The user list will be returned if it is left empty; all metrics will be returned if its value is `all`.
appCpu: CPU utilization of application;
sysCpu: CPU utilization of system;
aBit: upstream/downstream audio bitrate;
aBlock: audio lag duration;
vBit: upstream/downstream video bitrate;
vCapFps: video capturing frame rate;
vEncFps: video sending frame rate;
vDecFps: rendering frame rate;
vBlock: video lag duration;
aLoss: upstream/downstream audio packet loss;
vLoss: upstream/downstream video packet loss;
vWidth: upstream/downstream resolution in width;
vHeight: upstream/downstream resolution in height.
                     * @return DataType Metric to query. The user list will be returned if it is left empty; all metrics will be returned if its value is `all`.
appCpu: CPU utilization of application;
sysCpu: CPU utilization of system;
aBit: upstream/downstream audio bitrate;
aBlock: audio lag duration;
vBit: upstream/downstream video bitrate;
vCapFps: video capturing frame rate;
vEncFps: video sending frame rate;
vDecFps: rendering frame rate;
vBlock: video lag duration;
aLoss: upstream/downstream audio packet loss;
vLoss: upstream/downstream video packet loss;
vWidth: upstream/downstream resolution in width;
vHeight: upstream/downstream resolution in height.
                     */
                    std::vector<std::string> GetDataType() const;

                    /**
                     * 设置Metric to query. The user list will be returned if it is left empty; all metrics will be returned if its value is `all`.
appCpu: CPU utilization of application;
sysCpu: CPU utilization of system;
aBit: upstream/downstream audio bitrate;
aBlock: audio lag duration;
vBit: upstream/downstream video bitrate;
vCapFps: video capturing frame rate;
vEncFps: video sending frame rate;
vDecFps: rendering frame rate;
vBlock: video lag duration;
aLoss: upstream/downstream audio packet loss;
vLoss: upstream/downstream video packet loss;
vWidth: upstream/downstream resolution in width;
vHeight: upstream/downstream resolution in height.
                     * @param DataType Metric to query. The user list will be returned if it is left empty; all metrics will be returned if its value is `all`.
appCpu: CPU utilization of application;
sysCpu: CPU utilization of system;
aBit: upstream/downstream audio bitrate;
aBlock: audio lag duration;
vBit: upstream/downstream video bitrate;
vCapFps: video capturing frame rate;
vEncFps: video sending frame rate;
vDecFps: rendering frame rate;
vBlock: video lag duration;
aLoss: upstream/downstream audio packet loss;
vLoss: upstream/downstream video packet loss;
vWidth: upstream/downstream resolution in width;
vHeight: upstream/downstream resolution in height.
                     */
                    void SetDataType(const std::vector<std::string>& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     */
                    bool DataTypeHasBeenSet() const;

                private:

                    /**
                     * Call ID (unique call ID): sdkappid_roomgString (room ID)_createTime (room creation time in UNIX timestamp in seconds). You can get the parameter value through the `DescribeRoomInformation` API which is used to query the room list.
                     */
                    std::string m_commId;
                    bool m_commIdHasBeenSet;

                    /**
                     * Query start time in the format of local UNIX timestamp, such as 1588031999s, which is a point in time in the last 5 days.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time in the format of local UNIX timestamp, such as 1588031999s.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * User `sdkappid`
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * User array to query, which contains up to 6 users. If it is left empty, 6 users will be returned by default.
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * Metric to query. The user list will be returned if it is left empty; all metrics will be returned if its value is `all`.
appCpu: CPU utilization of application;
sysCpu: CPU utilization of system;
aBit: upstream/downstream audio bitrate;
aBlock: audio lag duration;
vBit: upstream/downstream video bitrate;
vCapFps: video capturing frame rate;
vEncFps: video sending frame rate;
vDecFps: rendering frame rate;
vBlock: video lag duration;
aLoss: upstream/downstream audio packet loss;
vLoss: upstream/downstream video packet loss;
vWidth: upstream/downstream resolution in width;
vHeight: upstream/downstream resolution in height.
                     */
                    std::vector<std::string> m_dataType;
                    bool m_dataTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILREQUEST_H_
