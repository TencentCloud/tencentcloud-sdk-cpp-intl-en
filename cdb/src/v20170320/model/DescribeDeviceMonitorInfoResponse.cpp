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

#include <tencentcloud/cdb/v20170320/model/DescribeDeviceMonitorInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

DescribeDeviceMonitorInfoResponse::DescribeDeviceMonitorInfoResponse() :
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_netHasBeenSet(false),
    m_diskHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceMonitorInfoResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Cpu") && !rsp["Cpu"].IsNull())
    {
        if (!rsp["Cpu"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Cpu` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cpu.Deserialize(rsp["Cpu"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cpuHasBeenSet = true;
    }

    if (rsp.HasMember("Mem") && !rsp["Mem"].IsNull())
    {
        if (!rsp["Mem"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Mem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mem.Deserialize(rsp["Mem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memHasBeenSet = true;
    }

    if (rsp.HasMember("Net") && !rsp["Net"].IsNull())
    {
        if (!rsp["Net"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Net` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_net.Deserialize(rsp["Net"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_netHasBeenSet = true;
    }

    if (rsp.HasMember("Disk") && !rsp["Disk"].IsNull())
    {
        if (!rsp["Disk"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Disk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_disk.Deserialize(rsp["Disk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


DeviceCpuInfo DescribeDeviceMonitorInfoResponse::GetCpu() const
{
    return m_cpu;
}

bool DescribeDeviceMonitorInfoResponse::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

DeviceMemInfo DescribeDeviceMonitorInfoResponse::GetMem() const
{
    return m_mem;
}

bool DescribeDeviceMonitorInfoResponse::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

DeviceNetInfo DescribeDeviceMonitorInfoResponse::GetNet() const
{
    return m_net;
}

bool DescribeDeviceMonitorInfoResponse::NetHasBeenSet() const
{
    return m_netHasBeenSet;
}

DeviceDiskInfo DescribeDeviceMonitorInfoResponse::GetDisk() const
{
    return m_disk;
}

bool DescribeDeviceMonitorInfoResponse::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}


